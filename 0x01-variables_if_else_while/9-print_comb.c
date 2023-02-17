#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[] = "0123456789";
	int i = 0;

	while (ch[i] != '\0')
	{
		putchar(ch[i]);
		if (ch[i+1] != '\0')
			putchar(',');
		i++;
	}
	putchar('\n');
	return (0);
}
