#include <stdio.h>
#include "main.h"

/**
 * main - Print all arguments it receives
 * @argc: Arguments number in command line arguments
 * @argv: Array of arguments
 * Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
