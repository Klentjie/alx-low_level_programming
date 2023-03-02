#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @str1 as dest: input value
 * @str2 as src: input value
 * @num as n: input value
 *
 * Return: str1
 */
char *_strncat(char *str1, char *str2, int num)
{
	int i;
	int j;

	i = 0;
	while (str1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < num && str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}

	str1[i] = '\0';
	return (str1);
}
