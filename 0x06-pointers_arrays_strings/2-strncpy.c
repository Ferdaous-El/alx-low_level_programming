#include "main.h"
#include <string.h>
/**
 * _strncpy  -   copies the string pointed to by src,
 * including the terminating null byte ('\0')
 * @dest: pointer of char
 * @src: pointer of char
 * @n: number of bytes
 * Return: Returns a a copy  of @src in  @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
