#include "holberton.h"
/**
 * is_prime_number - verify if the number is prime or not
 * @n: number
 * Return: 1 if it is prime and 0 if it is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (primefactor(n, n - 1));
}
/**
 * primefactor - check it is a prime factor number
 * @b: starting number
 * @a: number - 1
 * Return: 1 if it is prime and 0 if it is not prime
 */
int primefactor(int b, int a)
{
	if (a == 1)
		return (1);
	if (b % a == 0)
		return (0);
	else
		return (primefactor(b, a - 1));
}
