#include "main.h"
/**
 * print_alphabet_x10 -function prints the alphabet x10
 * new line at end of code
 */
void print_alphabet_x10(void)
{
	int alpha;
	int alpha2;

	for (alpha = 0; alpha <=9; alpha++)
	{
		for (alpha2 = 'a' ; alpha2 <= 'z'; alpha2++)
		{					
			_putchar(alpha2);
		}
		_putchar('\n');
											}
}
