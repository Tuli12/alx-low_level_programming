#include "main.h"
/**
 * _islower -function gives lower case c
 * @c: paramenter to check for
 * Return: 1 if present Return: 0 if else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
