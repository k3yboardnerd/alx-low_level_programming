#include <unistd.h>
/**
 * _putchar - prints the char
 * @c: char to printed
 * Description: prints the char
 * Return: char address
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
