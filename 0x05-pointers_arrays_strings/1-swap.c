#include "main.h"
/**
 * swap_int -funtcion swaps the value of an integer with another
 * @a: value of first integer
 * @b: value of second integer
 * Return: swapped values
 */

void swap_int(int *a, int *b)
{
	int first, second;

	first = *a;
	second = *b;

	*a = second;
	*b = first;
}

