#include <stdlib.h>
#include "search_algos.h"

/**
 * free_list - Deallocates a 
 *
 * @list: Pointer to the linked list to b
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}
