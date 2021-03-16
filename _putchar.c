#include "holberton.h"
/**
 * _putchar - writes a character to stdout
 * @c: character to be printed
 *
 * Return: 1 on success, -1 on failure
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
