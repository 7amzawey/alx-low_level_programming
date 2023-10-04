#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 deimens
 * array of integers
 * @width: is the width of the array
 * @height: is the hight of the array
 * Return: NULL on failure and NULL if width or
 * height 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < height; i++)
		{
		arr[i] = malloc(width * sizeof(int));
			if (arr[i] == NULL)
			{
				while (i >= 0)
				{
					free(arr[--i]);
					free(arr);
					return (NULL);
				}
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
	return (arr);
}

