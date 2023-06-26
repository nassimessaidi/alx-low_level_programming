#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int str_len = 0;
	int o;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	s--;
	for (o = str_len; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
