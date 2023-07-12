#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in
 * memory which contains the contents of s1, followed
 * by the contents of s2, and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int index, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	s3 = malloc(sizeof(char) * (len + 1));

	if (s3 == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		s3[concat_index++] = s1[index++];

	for (index = 0; s2[index]; index++)
		s3[concat_index++] = s2[index++];

	s3[concat_index - 1] = '\0';

	return (s3);
}
