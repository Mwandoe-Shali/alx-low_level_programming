#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *leet(char *str)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *leet_nums = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Iterate through the letters and leet_nums arrays */
		for (j = 0; letters[j] != '\0'; j++)
		{
			/*
			 * If a letter in the string matches a letter in the letters array,
			 * replace it with the corresponding leet number from leet_nums
			 */
			if (str[i] == letters[j])
				str[i] = leet_nums[j];
		}
	}

	return (str);
}

