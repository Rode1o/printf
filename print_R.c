#include "holberton.h"

/**
 * print_R - using ROT13 encryption encodes a string and print it
 * @str: string to be encrypted
 *
 * Return: nunber of characters printed
 */
int print_R(char *str)
{
	int a, b, token = 0;
	char x[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char y[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	if (str == NULL)
		return (_printf("(null)"));
	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (str[a] == y[b])
			{
				_putchar(x[b]);
				token++;
				break;
			}
		}
		if (y[b] == '\0')
		{
			_putchar(str[a]);
			token++;
		}
	}
	return (token);
}
