#include "main.h"
/**
 * _memcpy - copies the memory area
 * @dest:  dstination
 * @src: source
 * @n: n
 * Description: copies the memory area
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pointer = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (pointer);
}
