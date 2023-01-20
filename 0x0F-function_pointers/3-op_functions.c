#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum two integers
 * @a:number 1
 * @b:number 2
 *
 * Return: an integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - defference between intergers
 * @a:number 1
 * @b:number 2
 *
 * Return: an integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication between integers
 * @a:number 1
 * @b:number 2
 *
 * Return: an integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divison between integers
 * @a:number 1
 * @b:number 2
 *
 * Return: an integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
 * op_mod - the remainder betwwen integers
 * @a:number 1
 * @b:number 2
 *
 * Return: an integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
