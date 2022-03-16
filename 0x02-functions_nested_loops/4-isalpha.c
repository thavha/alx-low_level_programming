#include "main.h"

/**
 * _isalpha -  prints alphabets in lower case, followed by a new line
 * Return: Always 0 (Success)
 * @c: - is the input alphabet
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
