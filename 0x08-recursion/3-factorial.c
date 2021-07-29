#include "holberton.h"

/**
 * factorial - returns factorial of a number
 * @n: interger
 * Return: -1 if n is lower than 0, factorial otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
