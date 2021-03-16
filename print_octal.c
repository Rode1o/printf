#include "holberton.h"

/**
 * print_octal - prints an unsigned int in octal
 * @a: int to be printed
 *
 * Return: number of characters printed
 */
int print_octal(unsigned int a)
{
	int token = 0;

	if (a / 8)
		token += print_octal(a / 8);
	_putchar((a % 8) + '0');
	token++;

	return (token);
}
