#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: This is the first entry
 * @b: This is the second entry
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
