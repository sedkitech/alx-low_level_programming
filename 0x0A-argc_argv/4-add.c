#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: int
 * @argv: argv
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= 0)
		{
			continue;
		}

		if (isalpha(*argv[i]) > 0 || isalnum(*argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
