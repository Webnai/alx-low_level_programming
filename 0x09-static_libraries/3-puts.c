#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string,followed by a newline to stdout
 *
 * @str: pointer parameter to print
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while(*str!= '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
