#include "holberton.h"
#include <stdio.h>

/**
 * reset_to_98 - update parameter
 * @n: pointer
 */
void reset_to_98(int *n)
{
	int p = 98;

	n = &p;
}
