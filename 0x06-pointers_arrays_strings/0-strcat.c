#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest_str: destination string to concatenate to
 * @src_str: source string to concatenate from
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest_str, char *src_str)
{
	int dest_idx, src_idx;

	dest_idx = 0;
	while (dest_str[dest_idx] != '\0')
	{
		dest_idx++;
	}

	src_idx = 0;
	while (src_str[src_idx] != '\0')
	{
		dest_str[dest_idx] = src_str[src_idx];
		dest_idx++;
		src_idx++;
	}

	dest_str[dest_idx] = '\0';
	return (dest_str);
}
