#include "main.h"

/**
 * rev_string - print string
 * @s: Char
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i, j, k;
	char *str = s;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j  >=  0; j--)
	{
		s[k] = str[j];
		k++;
	}
}
