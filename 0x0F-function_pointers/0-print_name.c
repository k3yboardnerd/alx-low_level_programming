#include "function_pointers.h"
/**
 * print_name - This func prints the name from the pointer func
 * @name: the name to be printed
 * @f: function pointer pointing the func to print name
 *
 * Description: This func prints the name from the func pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
