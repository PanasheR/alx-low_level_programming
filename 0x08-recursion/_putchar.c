#include <unistd.h>

/**
 * -putchar - writes the character c
 * @c: The chracter to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
