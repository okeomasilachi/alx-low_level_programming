#include "function_pointers.h"

/**
 * print_name - prints the name inputed
 * @name: input parameter for the function
 * @f: function pointer that points to a function of type void
 * 
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	char *n = name;
	f(n);
}
