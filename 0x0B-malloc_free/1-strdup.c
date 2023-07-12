#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: String to be copied
 * 
 * Return:
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *copy;
	int i, len = 0;
	
	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1)
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	free(copy);

	return (copy);

}
