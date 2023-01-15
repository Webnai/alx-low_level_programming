#include "main.h"

/**
 * _strcpy - copies strings
 *
 * @dest: destination
 * @src: source
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;

	while (src[index])
	{

		dest[index] = src[index];
		index++;
	}

	return (dest);
}
