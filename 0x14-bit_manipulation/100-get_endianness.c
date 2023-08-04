#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	/* Declare a 32-bit integer with a known pattern */
	int num = 1;

	/* Cast the integer to a pointer to a char */
	char *endian_check = (char *)&num;

	/* If the first byte (lowest address) is 1, it's little endian */
	/* If the last byte (highest address) is 1, it's big endian */
	return (*endian_check);
}
