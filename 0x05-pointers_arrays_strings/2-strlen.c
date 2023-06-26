#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int long_str;

	while (*s != '\0')
	{
		long_str++;
		s++;
	}

	return (long_str);
}
