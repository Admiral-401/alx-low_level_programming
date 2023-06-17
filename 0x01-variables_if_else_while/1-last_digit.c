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
	if (n > 5)
	{
		printf("the last digit of n is %d  greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("the last digit of n is %d and is 0\n", n);
	}
	else if ((n < 6) && (n != 0))
	{
		printf("the last digit of n is %d is less than 6 and not 0\n", n);
	}
	return (0);
}
