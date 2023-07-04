#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: douuble pointer to the beginning of a listint_t list
 * @n: integer to add to the list
 *
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	if (head == NULL)
		return (NULL);
	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	newn->next = *head;
	*head = newn;
	return (newn);
}
