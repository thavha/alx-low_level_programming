#include "main.h"

/**
 * print_sign -  prints alphabets in lower case, followed by a new line
 * Return: Always 0 (Success)
 * @n: - is the input alphabet
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
