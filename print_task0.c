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
	char c = va_arg(arg, int);

	if (c != '\0')
		buffer_add(buff, c);
	return (1);
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
	char *s = va_arg(arg, char *);

	s++;
	_putchar(buff, '%');
	return (1);
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
















































































































































































































































































