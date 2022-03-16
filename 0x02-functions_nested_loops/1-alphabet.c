#include "main.h"

/**
 * print_alphabet -  prints alphabets in lower case, followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
