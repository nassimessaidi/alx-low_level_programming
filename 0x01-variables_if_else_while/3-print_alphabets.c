#include<stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: '3-print_alphabets'
 *
 * Return: Always 0 (Success)
 * betty style doc for function main goes there
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
