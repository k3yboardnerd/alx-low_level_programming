#include <unistd.h>
/**
 * _putchar - This funnction prints the char
 * @c: this is the character to be printed
 * Description: This function takes the c param and prints it
 * Return: an int of the char c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
