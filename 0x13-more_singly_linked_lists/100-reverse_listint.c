#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counter update of unique nodes
 * for the looped listint_t linked list
 * @head: pointer to head of the listint_t to check.
 *
 * Return: If list is not looped - 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *sheng, *zen;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	sheng = head->next;
	zen = (head->next)->next;

	while (zen)
	{
		if (sheng == zen)
		{
			sheng = head;
			while (sheng != zen)
			{
				nodes++;
				sheng = sheng->next;
				zen = zen->next;
			}

			sheng = sheng->next;
			while (sheng != zen)
			{
				nodes++;
				sheng = sheng->next;
			}

			return (nodes);
		}

		sheng = sheng->next;
		zen = (zen->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints listint_t list safely.
 * @head: pointer to head of listint_t list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

