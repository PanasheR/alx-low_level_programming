#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - appends src to dest
 * @dest: function parameter
 * @src: function parameter
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);

		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
