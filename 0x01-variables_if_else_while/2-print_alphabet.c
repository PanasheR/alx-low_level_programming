#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabet s without q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha, upper;
for (alpha = 97; alpha <= 122; alpha++)
putchar(alpha);
for (upper = 65; upper <= 90; upper++)
putchar(upper);
printf("\n");
return (0);
}
