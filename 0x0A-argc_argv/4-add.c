#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int agrc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int sum = 0, error = 0;

	for (int i = 0; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num <= 0)
		    error = 1;
		    
