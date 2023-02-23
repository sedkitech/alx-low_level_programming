#include <stdio.h>

/**
 * main - draw Entry point
 * Description: fizz buzz test is an interview question
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i == 100)
			printf("Buzz\n");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	return (0);
}
