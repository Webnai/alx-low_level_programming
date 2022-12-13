#include "main.h"
#include <stdio.h>

/**
 * print_alphabets -> prints the lower case alphabets
 */
void print_alphabet(void)
{
	int i;

	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
