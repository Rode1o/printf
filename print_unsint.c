#include "holberton.h"

/**
 * print_unsint - prints an unsigned int in decimal
 * @a: int to be printed
 *
 * Return: number of characters printed
 */
int print_unsint(unsigned int a)
{
	int token = 0;

	if (a / 10)
		token += print_unsint(a / 10);

	_putchar((n % 10) + '0');
	token++;

	return (token);
}
