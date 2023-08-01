#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in a linked list,
 * at a given position
 * @head: pointer to first node in list
 * @idx: index
 * @n: data to insert in new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

