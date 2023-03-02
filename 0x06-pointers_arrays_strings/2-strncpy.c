#include "main.h"
/**
 * _strncpy - copy a string
 * @str1 as dest: input value
 * @str2 as src: input value
 * @num as n: input value
 *
 * Return:str1
 */
char *_strncpy(char *str1, char *str2, int num)
{
	int j;

	j = 0;
	while (j < num && str2[j] != '\0')
	{
		str1[j] = str2[j];
		j++;
	}
	while (j < num)
	{
		str1[j] = '\0';
		j++;
	}

	return (str1);
}
