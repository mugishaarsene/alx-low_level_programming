#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text accordingly number
 *
 * Return: Always (success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n % 10 > 5)
	{
		printf("Last difit of %d is %d and is greater than 5\n", n n % 10);
	}
	else if (n % 10 == 0)
	{
		prinf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if (n % 10 < 6 && m % 10 != 0)
	{
		printf("Last digit of % is %d- and is less than 6 and not 0\n", n, n % 10);
	}

	return (0);
}
