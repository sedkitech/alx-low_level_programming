#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	while (ch[i] != '\0')
	{
		putchar(ch[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
