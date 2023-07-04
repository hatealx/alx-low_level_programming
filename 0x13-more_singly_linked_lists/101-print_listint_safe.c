#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array of pointers
 * to the nked list
 * @list: the old list nd
 * @size: size of the new list
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newl;
	size_t i;

	newl = malloc(size * sizeof(listint_t *));
	if (newl == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newl[i] = list[i];
	newl[i] = new;
	free(list);
	return (newl);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to t of the list
 *
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
