#include "holberton.h"
#include <stdio.h>

/**
* swap_int - swap values
* @a: pointer
* @b: pointer
*/
void swap_int(int *a, int *b)
{
        int temp;
        
        temp = *a;
        *a = *b;
        *b = temp;
}
