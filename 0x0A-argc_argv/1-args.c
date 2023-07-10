#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0
 * @argc: Counts the number of arguments in the command line arguments
 * @argv: Array of the arguments
 */
int main(int argc, char **argv[])
{
	(void)argv;
	
	printf("%d\n", argc - 1);
	return (0);
}
