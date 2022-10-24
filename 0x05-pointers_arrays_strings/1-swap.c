#include "main.h"

/**
 * swap_int - swap values of two integers a and b
 * @a: first int value to swap
 * @b: second int value to swap
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
