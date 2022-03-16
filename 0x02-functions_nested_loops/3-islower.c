#include "main.h"

/**
 * _islower -  prints alphabets in lower case, followed by a new line
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >+ 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
