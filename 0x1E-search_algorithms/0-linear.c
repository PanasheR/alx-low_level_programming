#include "search_algos.h"

/**
 * linear_search - func searches value in array
 * @array: int pointer to 1st element of the array
 * @size: size_t var of num of elements
 * @value: value searched
 * Return: first index where value is found and -1
 * if not
 */

int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);
	for (j = 0; j < (int) size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[i]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
