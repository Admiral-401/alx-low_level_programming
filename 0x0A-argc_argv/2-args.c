#include "main.h"
#include <stdio.h>

/**
  * main - Prints all the args
  * @argc: argument for counter
  * @argv: argument for vector
  *
  * Return: 0 Always success
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
