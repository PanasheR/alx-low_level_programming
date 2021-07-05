#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory are dest
 * @dest: first argument 
 * @src : second argument
 * @n : number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
