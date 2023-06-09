#include <unistd.h>
/**
 * This funnction prints the char
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
