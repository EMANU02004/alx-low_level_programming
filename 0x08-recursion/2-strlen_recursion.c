#include "main.h"
/**
 * _strlen_recursion - Returns lenght of string
 * @s: measure string
 *
 *
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
