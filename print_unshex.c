#include "holberton.h"

/**
 * print_unshex - prints an unsigned int in hex format
 * @a: int 
 * @flag: defines if uppercase or lowercase
 *
 * Return: number of characters printed
 */
int print_unshex(unsigned int a, char flag)
{
	int token = 0, er = 0;

	if (a / 16)
		token += print_unshex(a / 16, flag);
	er = a % 16;

	if (er < 10)
	{
		_putchar(er + '0');
		token++;
	}
	else
	{
		if (flag == 'l')
			_putchar(er - 10 + 'a');
		else if (flag == 'u')
			_putchar(er - 10 + 'A');
		token++;
	}
	return (token);
}
