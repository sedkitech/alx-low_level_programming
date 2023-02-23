#include "main.h"

/**
 * more_numbers -print numbers
 * Return: always 0
 */

void more_numbers(void)
{
int i;
int j = 0;

while (j <= 9)
{
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
for (i = '0'; i <= '4'; i++)
{
_putchar('1');
_putchar(i);
}
_putchar('\n');
j++;
}
}
