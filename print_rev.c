#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @str: string to be reversed and printed
 *
 * Return: number of characters printed
 */
int print_rev(char *str)
{
	int a;
	int token = 0;

	if (str == NULL)
	{
		_printf("(null)");
		return (6);
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
