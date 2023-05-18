#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: on success pointe to the created matrix else NULL
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);

			for (j = 0; j <= 1; j++)
				free(array[j]);
			return (NULL);
		}
	}
	for (i = 0; i < width; j++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
