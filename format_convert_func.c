#include "main.h"
/**
 * char_func - a function that prints a character
 * @arg_list: arguments list
 * Return: return the number of chars printed
 */
int char_func(va_list arg_list)
{
	write_func(va_arg(arg_list, int));
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

	c = va_arg(arg_list, char *);
	if (c == NULL)
	{
		c = "(null)";
	}
	for (n = 0; c[n] != '\0'; n++)
	{
		write_func(c[n]);
	}
	return (n);
}

/**
 * percent_func - a function that prints a percent
 *
 * @list_of_args: the list of args passed
 * Return: returns the number of chars printed
 */

int percent_func(__attribute__((unused))va_list list_of_args)
{
	write_func('%');
	return (1);
}

/**
 * int_func - a function that prints an integer
 * @list_of_args: list of variable number of args
 * Return: returns the number of elemnts printed
 */

int int_func(va_list list_of_args)
{
	int num_of_elem;

	num_of_elem = num_func(list_of_args);
	return (num_of_elem);
}
