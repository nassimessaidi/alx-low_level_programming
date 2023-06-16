#include<stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: '7-print_tebahpla'
 *
 * Return: Always 0 (Success)
 * betty style doc for function main goes there
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
