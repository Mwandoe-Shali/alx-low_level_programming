#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to be copied from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copy at most n characters from src to dest */
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	/* If src has fewer than n characters, pad dest with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
