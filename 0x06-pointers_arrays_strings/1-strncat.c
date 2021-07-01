#include "holberton.h"
#include <stdio.h>
#include "string.h"

/**
 * _strncat - appends src to dest
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) == *(src + j);

		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
}
