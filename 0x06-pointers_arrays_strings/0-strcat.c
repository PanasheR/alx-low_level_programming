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
	int i;

	i = 0;
	while (i >= 0)
	{
		*(dest + i) += *(src + i);
		if (*(src + i) == '\n')
		{
			break;
		}
		i++;
	}
	return (dest);
}
