#include "main.h"

/**
 * get_bit - get bit
 *
 * @n: integer number
 * @index: index
 *
 * Return: none
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;
	unsigned int i = 0;
	unsigned long int n2 = n;

	if (n == 0 && index == 0)
		return (0);
	while (n2 > 0)
	{
		n2 >>= 1;
		i++;
	}
	if (index > i)
		return (-1);

	if (1 & (n >> index))
		b = 1;
	else
		b = 0;
	return (b);
}