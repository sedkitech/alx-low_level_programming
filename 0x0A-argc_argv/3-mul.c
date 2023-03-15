#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program name
 * @argc: int
 * @argv: argv
 * Return: string
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
