#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - fuction execute a fuction.
 * @array: array to interate through.
 * @size: size of the array.
 * @action: the fuction to execute array and size on.
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != 0 && action != 0)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
