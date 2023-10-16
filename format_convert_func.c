#include "main.h"
/**
 * char_func - a function that prints a character
 * @arg_list: arguments list
 * Return: return the number of chars printed
 */
int char_func(va_list arg_list)
{
	write_fun(va_arg(arg_list, int));
	return (1);
}
/**
 * string_func - a function that prints a string
 * @arg_list: list of arguments passed to the function
 * Return: returns the number of chars prints
 */
int string_func(va_list arg_list)
{
	int n;
	char *c;

	c = va_arg(arg_list, char *)
	if (c == NULL)
	{
		c = "(null)";
	}
	for (n = 0; c[n] != '\0'; n++)
	{
		write_fun(c[n]);
	}
	return (n);
}
