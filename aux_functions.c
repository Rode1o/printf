#include "holberton.h"
#include <unistd.h>
/**
 * printstring - prints a string of chars
 * @s: string
 * Return: nothing
 */
void printstring(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
/**
 * printinteger - prints an integer
 * @n: integer
 * Return: nothing
 */
void printinteger(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		printinteger(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print*
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
