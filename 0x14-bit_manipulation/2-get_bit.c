#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index of the bit to retrieve, starting from 0.
 *
 * Return: The value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	/* Check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask with the corresponding bit set */
	mask = 1UL << index;

	/* Perform a bitwise AND operation with the mask and n */
	/* If the result is 0, the bit is 0; otherwise, the bit is 1 */
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
