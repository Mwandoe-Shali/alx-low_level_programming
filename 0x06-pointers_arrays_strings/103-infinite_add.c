#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r) or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0;

	while (n1[len1] != '\0')
		len1++;

	while (n2[len2] != '\0')
		len2++;

	if (len1 > size_r || len2 > size_r)
		return (0);

	len1--;
	len2--;
	r[size_r] = '\0';

	while (len1 >= 0 || len2 >= 0)
	{
		sum = carry + (len1 >= 0 ? (n1[len1] - '0') : 0) +
		      (len2 >= 0 ? (n2[len2] - '0') : 0);
		carry = sum / 10;
		r[--size_r] = (sum % 10) + '0';
		len1--;
		len2--;
	}

	if (carry)
		r[--size_r] = carry + '0';

	if (size_r > 0 && r[size_r - 1] == '0')
		return (&r[size_r]);

	return (&r[size_r - 1]);
}

