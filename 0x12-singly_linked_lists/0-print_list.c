#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - Prints all elements of a list
  * @h: A linked list
  *
  * Return: The number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t list = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("end of list [0] [0]\n");
		else
			printf("%s %d\n", h->str, h->len);
		h = h->next;
		list++;
	}
	return (list);
}
