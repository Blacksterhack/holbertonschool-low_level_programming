#include "holberton.h"
/**
 * _sqrt_recursion - return the power of x number y times
 * @n: number
 * Return: power result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (aux(n, 1));
}
/**
 * aux - find the sqrt of a number
 * @b: result
 * @a: base
 * Return: the base of a sqrt
 */
int aux(int b, int a)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	else
		return (aux(b, a + 1));
}
