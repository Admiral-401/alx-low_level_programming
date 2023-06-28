#include <stdio.h>
#include "main.h"

/**
 * print_array - prints members of array of int values
 * @a: array of ints
 * @n: number of array members to printed
 *
 * Return: void
 **/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
