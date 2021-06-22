#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lower case folloed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
