#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money.
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int cents, coins_number = 0;
    	int coin_values[] = {25, 10, 5, 2, 1};
    	int num_coins = sizeof(coin_values) / sizeof(coin_values[0]);
    	int i;

    	if (argc != 2)
    	{
        	printf("Error\n");
        	return (1);
    	}
    	else
    	{
        	cents = atoi(argv[1]);
        	if (cents < 0)
        	{
            	printf("0\n");
            	return (0);
        	}
        	for (i = 0; i < num_coins; i++)
        	{
            	while (cents >= coin_values[i])
            	{
                	cents -= coin_values[i];
                	coins_number++;
            	}
        	}
    	}
    	printf("%d\n", coins_number);
    	return (0);
}
