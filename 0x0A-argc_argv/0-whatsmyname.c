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
	if (argc >= 1)
	printf("%s\n", *argv);
	return (0);
}
