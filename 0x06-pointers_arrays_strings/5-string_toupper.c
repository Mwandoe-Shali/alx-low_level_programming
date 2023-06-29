#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to all uppercase
 * @str: Pointer to the string
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i;

	/* Iterate through each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the character is a lowercase letter */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert the lowercase letter to uppercase */
			str[i] = str[i] - 32;
		}
	}

	return (str);
}

