#include<stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: '6-print_numberz.c'
 *
 * Return: Always 0 (Success)
 * betty style doc for function main goes there
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
