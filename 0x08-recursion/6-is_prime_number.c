#include "main.h"
#include <stdio.h>

/**
 * isPrime - check if number is prime
 * @n: int
 * @i: int
 * Return: 0 or 1
 */

int isPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (isPrime(n, i - 1));
}

/**
 * is_prime_number - returns 1 if the integer is a prime number
 * @n: int
 * Return: int
 *
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (isPrime(n, n - 1));
}
