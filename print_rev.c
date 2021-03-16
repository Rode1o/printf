#include "holberton.h"

/**
 * print_rev - reverses a string to stdout
 * @str: string
 *
 * Return: number of characters printed
 */
int print_rev(char *str)
{
	int a;
	int token = 0;

	if (!str)
	{
		s = ("(null)");
	}

	for (a = 0; str[a]; a++)
		;

	for (; str[a - 1]; a--)
	{
		_putchar(str[a - 1]);
		token++;
	}
	return (token);
}
