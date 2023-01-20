#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - searchs for an integer
 * @argc: number of arguments
 * @argv: array with arguments
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	a = 0;
	b = 0;
	if (argc != 4)
	{
		printf("Erro\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	&& argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] == '\0')
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		result = (*get_op_func(argv[2]))(a, b);
		printf("%d\n", result);

	} else
	{

		printf("Error\n");
		exit(99);
	}
	return (0);
}
