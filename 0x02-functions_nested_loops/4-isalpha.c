#include "main.h"

/**
 * _isalpha - check for alphabetic character.
 * @c: the character to be checked
 * Return: 1 if lowercase or uppercase otherwise 0
 * betty style doc for function main goes there
*/

int _islower(int c)
{
	int r;

	r = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');

	return (r);
}
