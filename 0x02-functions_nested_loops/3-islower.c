#include "main.h"

/**
 * _islower - check for lowercase character.
 * @c: the character to be checked
 * Return: 1 if lowercase, otherwise 0
 * betty style doc for function main goes there
*/

int _islower(int c)
{
	int r;

	r = c >= 'a' && c <= 'z' ? 1 : 0;

	return (r);
}
