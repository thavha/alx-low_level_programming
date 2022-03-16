#include "main.h"

/**
 * print_alphabet_x10 -  prints alphabets x10 in lower case, and new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char al;
	int c = 0;

	while (c < 10)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		c++;
		_putchar('\n')
	}
	_putchar('\n');
}
