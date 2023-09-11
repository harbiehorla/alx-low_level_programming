#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * This program generates a random integer and determines its sign.
 * The generated integer changes each time the program runs.
 * It then prints whether the number is positive, zero, or negative.
 * Return: Always 0 (indicating successful execution)
 */

int main(void)
{
    int number;

    /* Seed the random number generator */
    srand(time(0));

    /* Generate a random number within a specified range */
    number = rand() - RAND_MAX / 2;

    if (number > 0)
    {
        printf("%d is a positive number\n", number);
    }
    else if (number == 0)
    {
        printf("%d is zero\n", number);
    }
    else
    {
        printf("%d is a negative number\n", number);
    }

    return (0);
}
