#include "main.h"
/**
 * print_last_digit -function prints the last value of a value
 * @n: integer to check
 * Return: last dgit of a value
 */

int print_last_digit(int n)
{
	n = n % 10;
	{
	if (n < 0)
		n = -n;
	_putchar (n + '0');
	return (n);
	}
}
