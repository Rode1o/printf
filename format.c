#include "holberton.h"

/**
 * format - prints invalid specifier as a literal
 * @f: format specifier to be printed
 *
 * Return: number of characters printed
 */
int format(char f)
{
	_putchar('%');
	_putchar(f);
	return (2);
}
