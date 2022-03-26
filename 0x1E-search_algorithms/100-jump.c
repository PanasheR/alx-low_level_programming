#include "search_algos.h"

/**
  * jump_search - Self explanatory.
  * @array: Pointer to 1st element of the array.
  * @size: The size of array.
  * @value: The value to search for.
  * Return: Return 1st element and NULL if value not found
  */
int jump_search(int *array, size_t size, int value)
{
	size_t j, dest, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (j = dest = 0; dest < size && array[dest] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", dest, array[dest]);
		j = dest;
		dest += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", j, dest);

	if (dest >= size)
		dest = size - 1;

	for (; j < dest && array[j] < value; j++)
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	printf("Value checked array[%ld] = [%d]\n", j, array[j]);

	return (array[j] == value ? (int)j : -1);
}
