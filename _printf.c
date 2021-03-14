#include "holberton.h"
/**
 * _printf - gets an output from given format
 * @format: character string
 * Return: the number of characters printed excluding the null byte
 * used to end output to strings
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int p_int;
	char *p_str;
	va_list list;

	va_start(list, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				i = va_arg(list, int);
				putchar(i);
				format++;
				i++;
				break;
			case 's':
				p_str = va_arg(list, char *);
				printstring(p_str);
				format++;
				i++;
				break;
			case '%':
				putchar('%');
				format++;
				i++;
				break;
			case 'd':
				p_int = va_arg(list, int);
				printinteger(p_int);
				format++;
				i++;
				break;
			case 'i':
				p_int = va_arg(list, int);
				printinteger(p_int);
				format++;
				i++;
				break;
			case '\0':
				break;
			default:
				putchar('%');
				putchar(*format);
				format++;
				i += 2;
			}
		}
		else
		{
			putchar(*format);
			format++;
			i++;
		}
	}
	va_end(list);
	return (i);
}
