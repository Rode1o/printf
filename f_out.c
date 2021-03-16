#include "holberton.h"
/**
 * out_print - selects format function based on specifiers
 * @f: character string
 * @arg_list: arguments list used to replace format specifiers
 * Return: the number of characters printed excluding the null byte
 * used to end output to strings
 */
int out_print(char f, va_list *arg_list)
{
	unsigned char c;
	char *s, *r, *R;
	int token = 0, d;
	unsigned int b;

	switch (f)
	{
	case 'c':
		c = va_arg(arg_list, int);
		token += print_char(c);
		break;
	case 's':
		s = va_arg(arg_list, char *);
		token += print_string(s);
		break;
	case '%':
		token += print_percent();
		break;
	case 'i':
	case 'd':
		d = va_arg(arg_list, int);
		token += print_int(d);
		break;
	case 'r':
		r = va_arg(arg_list, char *);
		token += print_rev(r);
		break;
	case 'R':
		R = va_arg(arg_list, char *);
		token += print_R(R);
		break;
	case 'b':
		b = va_arg(arg_list, unsigned int);
		token += print_bin(b);
		break;
	default:
		token += out_pr1nt(f, arg_list);
		break;
	}
	return (token);
}

/**
 * out_pr1nt - selects format function based on specifier
 * @f: format specifier
 * @arg_list: list of arguments used to replace format specifiers in string
 *
 * Return: number of characters printed
 */

int out_pr1nt(char f, va_list *arg_list)
{
	int token = 0;
	unsigned int o, u, x, X;

	switch (f)
	{
	case 'o':
		o = va_arg(arg_list, unsigned int);
		token += print_octal(o);
		break;
	case 'u':
		u = va_arg(arg_list, unsigned int);
		token += print_unsint(u);
		break;
	case 'x':
		x = va_arg(arg_list, unsigned int);
	token += print_unshex(x, 'l');
		break;
	case 'X':
		X = va_arg(arg_list, unsigned int);
	token += print_unshex(X, 'u');
		break;

	default:
		token += format(f);
		break;
	}
	return (token);
}
