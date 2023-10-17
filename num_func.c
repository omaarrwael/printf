#include "main.h"
/**
 * num_func - a function that prints the arg number
 * @list_of_args: list of variable number of args
 * Return: returns the number of elements printed
 */
int num_func(va_list list_of_args)
{
	int arg, d, counter;
	unsigned int number;

	arg = va_arg(list_of_args, int);
	d = 1;
	counter = 0;
	if (arg < 0)
	{
		counter += write_func('-');
		number = arg * -1;
	}
	else
	{
		number = arg;
	}
	while ((number / d) > 9)
	{
		d *= 10;
	}
	for (; d != 0; )
	{
		counter += write_func('0' + (number / d));
		number %= d;
		d /= 10;
	}
	return (counter);
}
