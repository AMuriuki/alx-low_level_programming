#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print diagonal sum.
 *
 * @a: an array of pointers of integers
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, sum_id, sum_di;

	for (i = 0, sum_id = 0; i < size * size; i += size + 1)
		sum_id += *(a + i);
	for (i = (size * size) - size, sum_di = 0; i > 0; i -= (size - 1))
		sum_di += *(a + i);
	printf("%d, %d\n", sum_id, sum_di);
}
