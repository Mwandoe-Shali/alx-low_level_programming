/**
 * Yes, the code can be rewritten without using printf.
 * _putchar function - to print the numbers.
 * Here's the modified version of the code:
 *
 * In this modified version, I added a new function print_number
 * that recursively prints each digit of a number.
 * The print_array function uses this print_number function
 * to print each element of the array.
 * Note that the print_number function handles both positive
 * and negative numbers.
 *
 */

#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @a: Pointer to the array of integers
 * @n: Number of elements to be printed
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
		{
			print_number(a[x]);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			print_number(a[x]);
		}
	}

	_putchar('\n');
}

/**
 * print_number - prints a single digit number
 * @n: The number to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}

