#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - calculate sum of all listint_t list elements
 * @head: first node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

