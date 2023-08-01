#include <stddef.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: node ptr
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}

