#include "main.h"
/**
 * _puts -function prints outa string
 * @str: the string to be printed out
 * Return: printed string plus new line
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar ('\n');
}
