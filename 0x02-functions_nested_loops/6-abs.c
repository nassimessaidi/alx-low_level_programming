#include "main.h"

/**
 * _abs - compute the absolute value of an integer..
 * @n: the int to be checked
 * Return: absolute value of an integer
 * betty style doc for function main goes there
*/

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	
	return (n);
}
