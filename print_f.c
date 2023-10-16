#include "main.h"
/**
 * _printf - Custom printf function to handle formats and variables
 * @format: Format specifier string.
 * @...: Variable number of auguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int char_number;
	va_list list_of_args;

	instance_t list_of_funcs[] = {
		{"c", char_func},
		{"s", string_func},
		{"%", percent_func},
		{NULL, NULL}
	};
	if (format == NULL)
	{
		return (-1);
	}
	va_start(list_of_args, format);
	char_number = convert_func(format, list_of_funcs, list_of_args);
	va_end(list_of_args);
	return (char_number);
}
