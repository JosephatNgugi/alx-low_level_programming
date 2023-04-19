#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Lowest bound of the array
 * @max: Highest bound of the array
 *
 * Return: Pointer to the newly created array
 * NULL if malloc fails, or min is greater than max
 */

int *array_range(int min, int max)
{
	int *arr, len, i;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}
