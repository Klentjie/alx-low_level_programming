#include "main.h"

/**
 * _strspn - Calculate the length of a prefix substring
 *
 * @s: Pointer to the string to search
 * @accept: Pointer to the substring to search for
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
