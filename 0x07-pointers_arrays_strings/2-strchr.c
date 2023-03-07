#include "main.h"

/**
 * _strchr - Find first occurrence of character in string
 *
 * @s: Pointer to null-terminated string to search
 * @c: Character to search for
 *
 * Return: Pointer to first occurrence of `c` in `s`, or 0 if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}
