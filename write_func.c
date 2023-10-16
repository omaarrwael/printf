#include "main.h"

/**
 * write_func - a function that writes a char to stdout
 * @c: the char to print
 * Return: returns 1 or -1
*/

int write_func(char c)
{
return (write(1, &c, 1));
}
