#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two arguments and prints result
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int first, second;
	int mul;

	first = atoi(argv[1]);
	second = atoi(argv[2]);
	mul = first * second;
	printf("%d\n", mul);
	return (0);
}

