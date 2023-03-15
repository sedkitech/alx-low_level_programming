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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
