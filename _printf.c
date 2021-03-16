#include "holberton.h"
/**
 * _printf - gets an output from a given format
 * @format: pointer to string of specifier
 *
 * Return: the number of characters printed (excluding the null
 * byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	unsigned int i = 0, len = 0;
	int token = 0, er = 0;

	if (!format)
		return (-1);
	va_start(arg_list, format);
	while (format[len])
		++len;
	for (i = 0; i < len; ++i)
	{
		if (format[i] == '%')
		{
			++i;
			while (format[i] == ' ')
				i++;
			if (format[i] == '\0')
				return (-1);
			er = out_print(format[i], &arg_list);
			if (er < 0)
				return (-1);
			token += er;
		}
		else
		{
			_putchar(format[i]);
			token++;
		}
	}
	va_end(arg_list);
	return (token);
}
