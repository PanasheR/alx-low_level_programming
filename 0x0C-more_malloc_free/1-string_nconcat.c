#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string to destiny to concat
 * @s2: string to source to concat
 * @n: amount of characters to copy from s1 to s2
 * Return: pointer to address of new concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strc;
	unsigned int lan1, lan2, lam, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; lan1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; lan2++)
		;

	if (n > ls2)
		n = ls2;

	lam = lan1 + n;

	strc = malloc(lam + 1);

	if (strc == NULL)
		return (NULL);

	for (i = 0; i < lam; i++)
		if (i < lan1)
			strc[i] = s1[i];
		else
			strc[i] = s2[i - ls1];

	strc[i] = '\0';

	return (strc);
}
