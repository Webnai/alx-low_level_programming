#include <stdio.h>

/**
 * main -assigns a random number
 * new line then
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
