#include "main.h"

/**
 * print_number - Prints a number character by character.
 * @num: The integer to be printed.
 * Return: void.
 */

void print_number(int num)
{
	unsigned int abs_num;

	abs_num = num;

	if (num < 0)
	{
		_putchar('-');
		abs_num = -num;
	}

	if (abs_num / 10 != 0)
	{
		print_number(abs_num / 10);
	}

	_putchar((abs_num % 10) + '0');
}
