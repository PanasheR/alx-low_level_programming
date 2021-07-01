#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compares string values
 * @s1: first function parameter
 * @s2: second function parameter
 * Return: string difference
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
