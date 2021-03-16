#include "holberton.h"

/**
 * print_string - prints a string
 * @s: pointer to string
 *
 * Return: number of characters printed
 */
int print_string(char *s)
{
	int i, token = 0;

	if (!s)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; ++i)
	{
		_putchar(s[i]);
		token++;
	}
	return (token);
}
