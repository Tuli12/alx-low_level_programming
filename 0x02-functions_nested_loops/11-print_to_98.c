#include "stdio.h"
#include "main.h"
/**
 * print_to_98 -function prints all numbers to 98
 * @n: denotes the whole number to be printed
 * Return: whole number between 1 and 98
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
		{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
		if  (i != 98)
			printf("%i, ", i);
		else
			printf("%i", i);
		}
	}
	else
		printf("%i", n);
	printf("\n");
}
