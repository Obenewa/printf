#include "main.h"
/**
 * get_width - A function that calculates the width for printing
 * @format: Formatted string
 * @list: list of arguments.
 * @k: list of arguments to be printed.
 * Return: width.
 */

int get_width(const char *format, int *k, va_list list)
{
	int width = 0;
	int curr_k;

	for (curr_k  = *k + 1; formatt[curr_k] != '\0'; curr_k++)
	{
		if (is_digit(format[curr_k]))
		{
			width *= 10;
			width += format[curr_k] - '0';
		}
		else if (format[curr_k] == '*')
		{
			curr_k++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*k curr_k - 1;
	return (width);
}
