#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: Always void (Success)
 * betty style doc for function main goes there
*/

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
