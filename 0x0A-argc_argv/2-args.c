#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * main - prints the program name
 * @argc: int
 * @argv: argv
 * Return: string
 */

int main(int argc, char *argv[])
{
	int i = 1;

	while (i <= argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
