#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list to be freed
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

