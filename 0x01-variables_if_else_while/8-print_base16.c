#include<stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: '8-print_base16'
 *
 * Return: Always 0 (Success)
 * betty style doc for function main goes there
*/
int main(void)
{
	int i;

	for (i = 48; i < 58 ; i++)
		putchar(i);
	for (i = 97; i < 103; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
