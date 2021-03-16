#include "holberton.h"

/**
 * print_int - calls func "number" to print a decimal int
 * @a: int 
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
 * number - prints a decimal int 
 * @n: int
 *
 * Return: number of characters printed
 */
int number(int n)
{
	int token = 0;

	if (n / 10 == 0 && n < 0)
	{
		_putchar('-');
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
