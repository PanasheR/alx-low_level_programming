#include "holberton.h"
#include <stdio.h>

/**
 * _memset - fills a memory with constant byte
 * @dest: function argument
 * @src: second function argument
 * @n: function parameter
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
