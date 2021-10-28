#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - free 2 dimensional array
 * @b: int
 *
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
