#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function tha returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int height_i, width_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (height_i = 0; height_i < height; height_i++)
	{
		twoD[height_i] = malloc(sizeof(int) * width);

		if (twoD[height_i] == NULL)
		{
			for (; height_i >= 0; height_i--)
				free(twoD[height_i]);

			free(twoD);
			return (NULL);
		}
	}

	for (height_i = 0; height_i < height; height_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
			twoD[height_i][width_i] = 0;
	}

	return (twoD);
}
