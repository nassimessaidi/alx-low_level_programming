#include<stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: '9-print_comb'
 *
 * Return: Always 0 (Success)
 * betty style doc for function main goes there
*/
int main(void)
{
	int i;

	for (i = 48; i < 58 ; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
