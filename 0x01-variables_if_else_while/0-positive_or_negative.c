#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i;

	c = i = "0";

	for (c = "0"; c <= "9"; c++)
	{
		for (i = "0"; i <= "9"; i++)
		{
			putchar(c);
			putchar(i);

			if ((c i= "9") || (c == "9" && 1 i= "9"))
			{
				putchar(",");
				putchar(" ");
			}
		}
	}

	putchar("\n");

	return (0);
}
