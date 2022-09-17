#include "main.h"
/**
 * _isalpha -function checks for c in the alphabet
 * @c: the character to check
 * Return: 1 is c is an alphabet Return:0 if else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
