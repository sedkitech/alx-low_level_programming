#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 *@s: string
 * Return: always 0
 */

void rev_string(char *s)
{
	int length = strlen(s) - 1;
	int i = 0;
	char tmp;
	char *revs = s;

	while (length >= 0)
	{
		tmp = revs[i];
		revs[i] = revs[length];
		revs[length] = tmp;

		length--;
		i++;
	}

}
