#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @dest: starting address of memory to be filled
 * @value: the desired value
 * @size: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *dest, char value, unsigned int size)
{
	int i = 0;

	for (; size > 0; i++)
	{
		dest[i] = value;
		size--;
	}
	return (dest);
}
