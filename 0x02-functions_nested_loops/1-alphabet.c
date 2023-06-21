#include "main.h"

/**
 *main - Entry point
 *
 *print_alphabet - print all alphabet in lowercase
 *
 *Return (0);
 */
void print_alphabet(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }
    _putchar('\n');
    return (0);
}
