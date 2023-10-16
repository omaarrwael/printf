#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct placeholder_func - struct that hold two pointers to char and function
 * @proxys: a pointer to a char represents the operator
 * @conv_func: a pointer to a function that converts the args
 */

struct placeholder_func
{
	char *proxys;
	int (*conv_func)(va_list);
};

typedef struct placeholder_func instance_t;

/*
 * _printf - Custom printf functin to handle format specifiers and variables
 * This funtion prints formatted output based on format specified
 * @format: Format specifier string.
 * @...: Variable number of args based on format specs
 * Return: Number of characters printed
 */
int _printf(const char *format, ...);

int convert_func(const char *format, instance_t list_of_funcs[],
		va_list list_of_args);

int write_fun(char c);
int char_func(va_list arg_list);
int string_func(va_list arg_list);
int percent_func(va_list arg_list);

#endif
