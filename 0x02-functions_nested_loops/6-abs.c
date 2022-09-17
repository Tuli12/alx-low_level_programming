#include "main.h"
/**
 * _abs -function calculates the absolute value of an integer
 * @n: integer to check
 * Return: absolute value of an integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
