#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. string

 */
int **alloc_grid(int width, int height)
{

	int **mee;
	int u, v;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (u = 0; u < height; u++)
	{
		mee[u] = malloc(sizeof(int) * width);

		if (mee[u] == NULL)
		{
			for (; u >= 0; u--)
				free(mee[u]);

			free(mee);
			return (NULL);
		}
	}

	for (u = 0; u < height; u++)
	{

		for (v = 0; v < width; v++)
			mee[u][v] = 0;
	}
	return (mee);

}

