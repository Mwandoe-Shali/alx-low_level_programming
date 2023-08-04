#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Calculate the difference between n and m using bitwise XOR */
	unsigned long int diff = n ^ m;

	/* Initialize a variable to count the number of bits to flip */
	unsigned int count = 0;

	/* Loop to count the number of set bits in the difference */
	while (diff > 0)
	{
		/* Increment count if the least significant bit is set */
		count += diff & 1;

		/* Right shift the difference to check the next bit */
		diff >>= 1;
	}

	/* Return the total count, representing the number of bits to flip */
	return (count);
}
