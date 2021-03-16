#ifndef _PRINTF_
#define _PRINTF_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>


int _printf(const char *format, ...);
int _putchar(char c);
int out_print(char f, va_list *arg_list);
int out_pr1nt(char f, va_list *arg_list);
int print_char(unsigned char);
int print_string(char *);
int print_percent(void);
int print_int(int);
int number(int n);
int print_rev(char *str);
int print_R(char *str);
int print_bin(unsigned int);
int format(char);
int print_octal(unsigned int);
int print_unsint(unsigned int);
int print_unshex(unsigned int, char);

#endif
