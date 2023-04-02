#include "main.h"
/**
 * print_char - finction to print character
 * @arg: the variadic function variable
 * @buff: the buffer
 * Return: the length
 *
 */
int print_char(va_list arg, char *buff)
{
	int i = 1;
	char c = va_arg(arg, int);

	if (c == '\0')
		c = 0;
	_putchar(buff, c);
	return (i);
}
/**
 * print_percent - prints percent sign
 * @arg: the variadic function variable
 * @buff: the buffer
 * Return: the length
 *
 */
int print_percent(va_list arg, char *buff)
{
	va_list s;
	char *vi = "";
	int x;

	va_copy(s, arg);
	vi = va_arg(s, char *);
	_putchar(buff, '%');
	x = atoi(vi);
	x = 1;
	return (x);
}
/**
 * print_string - print a string
 * @arg: the variadic function variable
 * @buff: the buffer
 * Return: the length
 */
int print_string(va_list arg, char *buff)
{
	char *s = va_arg(arg, char *);
	int len, i;

	if (s)
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
			_putchar(buff, s[i]);
	}
	else
	{
		len = 6;
		s = "(null)";
		for (i = 0; i < len; i++)
			_putchar(buff, s[i]);
	}
	return (len);
}
















































































































































































































































































