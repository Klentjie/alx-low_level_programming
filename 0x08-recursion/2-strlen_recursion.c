#include "main.h"

/**
 * _strlen_recursion - returns the length of a string using recursion
 * @str: the string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *str)
{
	int length = 0;

	if (*str)
	{
		length++;
		length += _strlen_recursion(str + 1);
	}

	return (length);
}
