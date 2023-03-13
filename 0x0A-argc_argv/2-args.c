#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments the program receives
 * @argc: number of arguments apssed to the program
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
