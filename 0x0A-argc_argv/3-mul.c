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

	int num1 = 0, num2 = 0, mul =0;
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = first * second;
	printf("%d\n", mul);
	return (0);
}

