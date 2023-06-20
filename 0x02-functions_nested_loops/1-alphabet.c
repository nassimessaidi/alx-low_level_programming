#include "main.h"

/**
 * main - Entry point
 *
 * Description: '0-putchar'
 *
 * Return: Always 0 (Success)
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
