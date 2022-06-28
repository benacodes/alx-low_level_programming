#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocate grid
 * @width: width
 * @height: height
 * Return: NULL or pointer
 */
int **alloc_grid(int width, int height)
{
	int **twod;
	int wid_i, hgt_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	twod = malloc(sizeof(int *) * height);

	if (twod == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		twod[hgt_i] = malloc(sizeof(int) * width);
		if (twod[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(twod[hgt_i]);

			free(twod);
			return (NULL);
		}
	}
	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			twod[hgt_i][wid_i] = 0;
	}
	return (twod);
}
