#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints the last digit from rand'
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("the last digit of %d is %d  greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("the last digit of %d is %d and less 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("the last digit of %d is %d and is not 0\n", n, n % 10);
	}
	return (0);
}