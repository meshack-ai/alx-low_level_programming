#include <stdlib.h>

/**
 *malloc_checked - allocates memory
 * @b: no of bytes to allocate
 *
 * Return: a pointer to  memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

