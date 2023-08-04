#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to clear the bit in.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask with the corresponding bit set to 0 */
	mask = ~(1UL << index);

	/* Perform a bitwise AND operation with the mask and the number pointed by n */
	*n &= mask;

	return (1);
}
