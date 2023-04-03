#include "main.h"
/**
 * *_memset - Fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 * Description: Fills memory with a constant byte
 * Returns: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pointer = s;

	while (n-- > 0)
	{
		*pointer = b;
	}
	return (s);
}
