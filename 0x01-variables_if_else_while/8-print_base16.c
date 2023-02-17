#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[] = "0123456789abcdef";
	int i = 0;

	while (ch[i] != '\0')
	{
		putchar(ch[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
