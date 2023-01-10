#include <unistd.h>

/**
 * _putchar - writes charcter c to stdout
 * @c: the character to print
 * Return: 1 on succes, -1 on fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
