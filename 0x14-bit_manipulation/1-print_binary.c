#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted to binary and printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int shift_count = 0;

	/* Find the position of the highest set bit in n */
	while ((n >> shift_count) > 0)
		shift_count++;

	/* Adjust the shift count to get the correct bit position */
	shift_count--;

	/* Print the binary representation */
	while (shift_count >= 0)
	{
		if ((n & (mask << shift_count)) != 0)
			_putchar('1');
		else
			_putchar('0');

		shift_count--;
	}
}
