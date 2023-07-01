#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */

unsigned int _strlen(const char *s)
{

	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: i pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw, *temp;

	if (str == NULL)
		return (NULL);
	nw = malloc(sizeof(list_t));

	if (nw == NULL)
		return (NULL);
	nw->str = strdup(str);
	if (nw->str == NULL)
	{
		free(nw);
		return (NULL);
	}
	nw->len = _strlen(nw->str);
	nw->next = NULL;
	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = nw;
	return (nw);


}
