#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lowercase;
    char uppercase;

    /* Print lowercase letters */
    for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
    {
        putchar(lowercase);
    }

    /* Print uppercase letters */
    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
    {
        putchar(uppercase);
    }

    putchar('\n');

    return (0);
}

