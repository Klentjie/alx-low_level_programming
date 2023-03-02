#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @str: pointer to string parameter
 *
 * Return: *str
 */

char *rot13(char *str)
{
	int i, j;
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == uppercase[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (str);
}
