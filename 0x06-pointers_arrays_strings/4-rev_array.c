#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse array intergers
 * @a: function parameter,array
 * @n: function parameter, number of items
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
