#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints the lenth of a string
 *
 * @s: is a pointer
 * Return: the lenth of a string
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}
