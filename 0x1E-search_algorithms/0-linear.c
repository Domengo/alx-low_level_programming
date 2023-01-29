#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - function to search value
 * array - pointer to the first element of the array to search in
 * size - number of elements in the array
 * value - value to be searched
 * Returns value if found and -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	printf("Value checked array[%lu] = [%d]\n", i, value);
		if (array[i] == value)
		return (i);
	return (-1);
}
