#include "main.h"
#include <stdio.h>

/**
  * main - Prints the total number of args
  * @argc: argument counter
  * @argv: argument represent vector
  *
  * Return: 0 Always success
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
