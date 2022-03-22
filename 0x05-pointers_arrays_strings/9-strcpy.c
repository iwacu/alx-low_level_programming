#include <stdio.h>
#include "main.h"

/**
 * _strcpy - A function that copies string.
 * @dest: destination
 * @src: string to be copied
 * Return: Address of desc
 */

char *_strcpy(char *dest, char *src)
{
	int i;

		for (i = 0; src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
	dest[i] = '\0';
	return (dest);
}
