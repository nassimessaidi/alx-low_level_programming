#include "main.h"

/**
 * print_sign - check for alphabetic character.
 * @n: the int to be checked
 * Return: 1 if greater than 0, 0 if equal 0, -1 otherwise
 * betty style doc for function main goes there
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
