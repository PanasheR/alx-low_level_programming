#include "search_algos.h"

/**
 * jump_search - func searches array for a value
 * @array: target array
 * @size: array length
 * @value: method array
 * Return: return 1st element found and NULL if not
 */
int jump_search(int *array, size_t size, int value)
{
	size_t y = 0;
	int step = sqrt(size);

	if (!array || size == 0)
		return (-1);
	while (array[y] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", y, array[y]);
		y += step;
		if (y >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", y - step, y);
	y -= step;
	while (array[y] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", y, array[y]);
		y++;
		if (y == size)
			return (-1);
	}
	if (array[y] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", y, array[y]);
		return (y);
	}
	return (-1);
}
