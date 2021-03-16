#include "holberton.h"

/**
 * print_string - prints a string
 * @s: pointer to string to be printed
 *
 * Return: number of characters printed
 */
int print_string(char *s)
{
	int i, token = 0;

	if (s == NULL)
	{
		_printf("(null)");
		return (6);
	}
	for (i = 0; s[i] != '\0'; ++i)
	{
		_putchar(s[i]);
		token++;
	}
	return (token);
}
