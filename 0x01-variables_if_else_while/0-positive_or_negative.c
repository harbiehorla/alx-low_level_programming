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
int n;

/* Seed the random number generator */
srand(time(0));

/* Generate a random number within a specified range */
n = rand() - RAND_MAX / 2;

printf("%d is ", n);

if (n > 0)
{
   printf("positive\n");
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return (0);
}

