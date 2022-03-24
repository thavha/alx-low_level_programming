#include "main.h"

/**
 * _strcpy - copy a strings
 * @dest: string to append to
 * @src: string to add
 * @n: number of bytes of str to concatenate
 *
 * Return: a poniter to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
