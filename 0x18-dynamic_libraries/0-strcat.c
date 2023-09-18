#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	/* Move to the end of the dest string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Append the src string to the end of dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* Add null termination to the concatenated string */

	return (s);
}

