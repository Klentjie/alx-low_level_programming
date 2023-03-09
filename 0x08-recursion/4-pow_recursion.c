#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @base: the base value
 * @exponent: the exponent value
 * Return: the result of the power operation
 */
int _pow_recursion(int base, int exponent)
{
	if (exponent < 0)
		return (-1);
	if (exponent == 0)
		return (1);
	return (base * _pow_recursion(base, exponent - 1));
}
