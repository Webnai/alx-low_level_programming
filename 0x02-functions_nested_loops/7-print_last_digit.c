#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n : is the int to be used
 * Return: int value
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
		x = x * -1;
	_putchar(x + '0');

	return (x);
}
