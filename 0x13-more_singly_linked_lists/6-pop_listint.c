#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: ptr to first element in the linked list
 *
 * Return: the value inside  elements that ware deleted,
 * 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int del;

	if (!head || !*head)
		return (0);

	del = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (del);
}

