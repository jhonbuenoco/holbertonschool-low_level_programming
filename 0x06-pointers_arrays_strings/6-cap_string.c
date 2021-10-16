#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalize
 * @str: char
 *
 *
 *
 * Return: char
 */


char *cap_string(char *str)
{
	int i, j, k;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;
	j = 0;

	while (str[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		for (k = 0 ;  k < 12 ; k++)
		{
			if (str[j] == sep[k] && str[j + 1] != sep[k + 1])
			{
				if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
					str[j + 1] = toupper(str[j + 1]);
			}
		}
	}

	return (str);
}
