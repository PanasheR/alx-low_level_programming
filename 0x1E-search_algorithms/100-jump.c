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
	size_t j, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (j = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		j = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", j, jump);

	if (jump >= size)
		jump = size - 1;

	for (; j < jump && array[j] < value; j++)
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	printf("Value checked array[%ld] = [%d]\n", j, array[j]);

	return (array[i] == value ? (int)i : -1);
}
