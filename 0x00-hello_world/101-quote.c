#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	while (ch[i] != '\0')
	{
	putchar (ch[i]);
	i++;
	}
	return (0);
}
