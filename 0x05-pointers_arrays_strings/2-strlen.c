#include "main.h"
/**
 * _strlen -function return the lengths of a string
 * @s: string whose length will be determined
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}
