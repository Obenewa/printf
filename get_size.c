#include "main.h"

/**
 * get_size - A function that calculates the size
 * to cast the argument
 * @format: formatted string to print the arguments
 * @k: list of arguments to be printed.
 * Return: Precision.
 */

int get_size(const char *format, int *k)
{
	int size = 0;
	int curr_k = *k + 1;

	if (format[curr_k] == '1')
		size = S_LONG;
	else if (format[curr_k] == 'h')
		size = S_SHORT;

	if (size == 0)
		*k = curr_k - 1;
	else
		*k = curr_k;

	return (size);
}
