#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void);

void print_alphabet(void){

	for (int i = 'a'; i <= 'z'; i++)
		putchar(i);
}

int main(void)
{
    print_alphabet();
    return (0);
}
