#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments passed to the program
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
