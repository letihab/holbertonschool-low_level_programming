#include "main.h"

/**
 * *_memcpy - function that copy memory area
 *@dest: memory that received the cpy bytes
 *@src: localisation of memory area
 *@n: number of copy byte
 *Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
