#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - count for any number
 * @n: variable to count
 * Return: result
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98 ; ++n)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; --n)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
