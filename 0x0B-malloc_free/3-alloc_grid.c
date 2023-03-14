#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - loop to make grid
 * @height: height variable storage
 * @width: width variable storage
 * Return: Pointer to 2 dimenstional array
 */
int **alloc_grid(int width, int height)
{
	int **dee;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);
	dee = malloc(sizeof(int *) * height);
	if (dee == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		dee[x] = malloc(sizeof(int) * width);
		if (dee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(dee[x]);
			free(dee);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			dee[x][y] = 0;
	}
	return (dee);
}
