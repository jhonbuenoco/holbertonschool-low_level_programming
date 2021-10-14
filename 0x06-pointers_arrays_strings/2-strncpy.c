#include "main.h"

/**
 * _strncpy - print string
 * @dest: char
 * @src: char
 * @n: n
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	j= 0;
	k = 0;

	while (src[i] != '\0')
		i++;

	while (dest[j] !='\0')
		j++;

	if (n > i)
		n = i;

	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}
	if (j > k && i < n)
	{
		while (k < j)
		{
			dest[k] = '\0';
			k++;
		}
	}

	return (dest);
}
