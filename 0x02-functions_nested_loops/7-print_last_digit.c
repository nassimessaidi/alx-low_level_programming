#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @n: the int to be checked
 * Return: absolute value of an integer
 * betty style doc for function main goes there
*/

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;	
	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');

	return (last_digit);
}
