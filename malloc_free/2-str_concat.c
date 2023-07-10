#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenate two strings
 *@s1: first string
 *@s2: second strint to concatenated
 *Return: empty string if NULL is passed
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] = '\0'; i++)
		;
	for (j = 0; s2[j] = '\0'; j++)
		;
	s = malloc(i * sizeof(*s1)) + (sizeof(*s2)) + 1);
if (s == NULL)
	return (NULL);
for (k = 0; l = 0; s < (i + j + 1); s++)
{
	if (k < i)
		s[k] = s1[k];
	else
		s[k] = s2[l++];
}
return (s);
}
