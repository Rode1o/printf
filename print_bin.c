#include "holberton.h"

/**
 * print_bin - prints an unsigned int in binary
 * @a: unsigned int to be printed in binary
 *
 * Return: number of characters printed
 */
int print_bin(unsigned int a)
{
	int token = 0;

	if (a > 1)
		token += print_bin(a / 2);
	_putchar((a % 2) + '0');
	token++;

	return (token);
}
