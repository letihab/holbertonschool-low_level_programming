#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *s)
{
	char *r = s;
	int i;
	char a[] = " \t\n,.!?\"(){}";
	int cap = 1;

	while (*s)
	{
		if (cap && *s >= 'a' && *s <= 'z')
			*s -= 32;
		cap = 0;
		for (i = 0; i < 12; i++)
		{
			if (*s == a[i])
				cap = 1;
		}
		s++;
	}
	return (r);
}
