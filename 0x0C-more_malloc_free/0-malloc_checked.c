#include <stdio.h>
#include <stdlib.h>
/**
* *malloc_checked - allocates memory using malloc
*@b: size of the pointer
*Return: A pointer to the allocated memory or exit
*/
void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}