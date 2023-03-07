#include "main.h"

/**
 * _strspn - Calculate the length of a prefix substring
 *
 * @s: Pointer to the string to search
 * @accept: Pointer to the substring to search for
 *
 * Return: The number of bytes in the initial segment of `s` that consist of
 *         only bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (0);
			}
		}
		s++;
	}

	return (n);
}
