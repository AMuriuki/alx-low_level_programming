#include "main.h"

/**
 * swap_int - takes two int type pointer args and swaps the values
 * to the vairables they point to
 *
 * @a: 1st argument int type
 * @b: 2nd argument int type
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
