#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *rot13(char *str)
{
	int i, j;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the character is a letter */
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			/* Find the corresponding character in the input array and replace it */
			for (j = 0; input[j] != '\0'; j++)
			{
				if (str[i] == input[j])
				{
					str[i] = output[j];
					break;
				}
			}
		}
	}

	return (str);
}

