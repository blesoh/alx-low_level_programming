#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *z;

	while (head)
	{
		z = head->next;
		free(head->str);
		free(head);
		head = z;
	}
}

