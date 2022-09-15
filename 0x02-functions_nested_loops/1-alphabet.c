#include "main.h"
/**
 * print_alphabet -function to print lowercase abc
 * a new line added at end of code
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

	{
		_putchar(alpha);
	}

		_putchar('\n');
}
