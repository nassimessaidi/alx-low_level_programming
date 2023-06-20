#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase, followed by a new line.
 * Return: Always void (Success)
 * betty style doc for function main goes there
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
