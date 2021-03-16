#include "holberton.h"

/**
 * format_di - calls a function to print an int in base 10
 * @a: int to be printed
 *
 * Return: number of characters printed
 */
int print_int(int a)
{
	int token;

	token = number(a);
	return (token);
}
/**
 * number - prints an integer in base 10
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int number(int n)
{
	int token = 0;

	if (n / 10 == 0 && n < 0)
	{
		_putchar('_');
		token++;
	}
	if (n / 10)
		token += number(n / 10);
	if (n % 10 < 0)
	{
		_putchar(-(n % 10) + '0');
		token++;
	}
	else
	{
		_putchar (n % 10 + '0');
		token++;
	}
	return (token);
}
