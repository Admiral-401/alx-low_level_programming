#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Description: Function prints alphabets in lowercase
 *Retrn 0 (Success)
 */

void print_alphabet(void)
int main(void)
{
	char alp;
	alp = print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
