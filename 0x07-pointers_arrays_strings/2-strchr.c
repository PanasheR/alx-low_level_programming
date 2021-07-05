#include "holberton.h"
#include <stddef.h>

/* file: 2-strchr.c*/
/**
 * _strchr - returns a pointer to the firstoccurrence
 * of the character c in the string
 * @s : char under investigation
 * @c : char investigating s
 * Return: points to function result or null
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		i++;
	}

	return (NULL);
}
