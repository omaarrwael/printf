#include "main.h"

/**
 * convert_func - a function that prints a formatted chars
 * passed as args
 * @format: a pointer to a string
 * @list_of_funcs: a list of functions struct
 * @list_of_args: a list of a variable number of args
 * Return: returns the number of chars printed or -1
 */

int convert_func(const char *format,
	       instance_t list_of_funcs[], va_list list_of_args)
{
	int n, l, value, number_of_chars = 0;

	for (n = 0; format[n] != '\0'; n++)
	{
		if (format[n] == '%')
		{
			for (l = 0; list_of_funcs[l].proxys != NULL; l++)
			{
				if (format[n + 1] == list_of_funcs[l].proxys[0])
				{
					value = list_of_funcs[l].conv_func(list_of_args);
					if (value == -1)
						return (-1);
					number_of_chars += value;
					break;
				}
			}
			if (list_of_funcs[l].proxys == NULL && format[n + 1] != ' ')
			{
				if (format[n + 1] != '\0')
				{
					write_func(format[n]);
					write_func(format[n + 1]);
					number_of_chars += 2;
				}
				else
					return (-1);
			}
			n++;
		}
		else
		{
			write_func(format[n]);
			number_of_chars++;
		}
	}
	return (number_of_chars);
}
