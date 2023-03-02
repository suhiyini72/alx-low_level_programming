#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: declared array
 * @n: number of elements of array
 *
 * Return: void type
 */

void reverse_array(int *a, int n)
{
	int k;
	int y;

	for (k = 0; k < n--; k++)
	{
		y = a[k];
		a[k] = a[n];
		a[n] = y;
	}
}
