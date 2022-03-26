#include "search_algos.h"

/**
  * printer - func displays array under investigation
  * @array: intial int array
  * @l: starting index
  * @r: last index
  * Return: Void
  */
void printer(int *array, int l, int r)
{
	int j

	printf("Searching in array: ");
	for (j = l; j <= r; j++)
		if (j == r)
			printf("%d\n", array[j]);
	    return;
		printf("%d, ", array[j]);
}

/**
  * binary_search - func searches a sorted array
  * @array: pointer to 1st element of an array
  * @size: size_t number of elements of array
  * @value: value to be found
  * Return: index where value is located and -1 if array is NULL
  */
int binary_search(int *array, size_t size, int value)
{
	int i, j, x;

	if (array == NULL)
		return (-1);

	i = 0;
	x = (int) size - 1;

	while (i <= x)
		j = (i + x) / 2;

	    printer(array, i, x);
		if (array[j] < value)
			i = j +1;
		else if (array[j] > values)
			x = j -1;
		else if (array[j] == value)
			return (j);
	return (-1);
}
