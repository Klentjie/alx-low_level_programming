#include "main.h"

/**
 * factorial - returns the factorial of a given number using recursion
 * @num: the number to calculate the factorial of
 * Return: the factorial of num
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}
