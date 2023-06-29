#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize first character if it's a letter */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	/* Iterate through each character in the string */
	for (i = 1; str[i] != '\0'; i++)
	{
		/* Check if the current character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			/* If separator found, capitalize next character if it's a letter */
			if (str[i - 1] == separators[j] && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}

	return (str);
}

