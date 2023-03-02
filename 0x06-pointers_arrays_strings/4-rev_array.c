#include "main.h"
/**
 * reverse_array - reverse array of integers
 *@ary as a: array
 *@numE as n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *ary, int numE)
{
	int k;
	int l;

	for (k = 0; k < numE--; k++)
	{
		l = ary[k];
		ary[k] = ary[numE];
		ary[numE] = l;
	}
}
