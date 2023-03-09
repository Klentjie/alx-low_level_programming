#include "main.h"

int check_prime(int num, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - checks if a number is prime recursively
 * @num: the number to check
 * @i: iterator
 * Return: 1 if num is prime, 0 otherwise
 */
int check_prime(int num, int i)
{
	if (i == 1)
		return (1);
	if (num % i == 0 && i > 0)
		return (0);
	return (check_prime(num, i - 1));
}
