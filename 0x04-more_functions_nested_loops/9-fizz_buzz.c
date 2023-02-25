#include "main.h"
#include <stdio.h>

/**
*main - prints the numbers from 1 to 100, followed by the
*but the multiples of three prints Fizz instead of the three
*and for the multiples of five prints Buzz
*Returns: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
	{
		printf(" FizzBuzz");
	}
		else if (i == 1)
		{printf("%d", 1);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);

}

