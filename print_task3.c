#include "main.h"
/**
 * print_number_u - print unsigned num
 * @num: the num that going to printed
 * @buff: the buffer;
 * Return: the number of digits
 *
 */
int print_number_u(unsigned int num, char *buff)
{
	unsigned int a, l;
	int len = 0;

	a = 1;
	l = num;
	while (l > 9)
	{
		l = l / 10;
		a *= 10;
	}
	while (a > 9)
	{
		_putchar(buff, (num / a) % 10 + '0');
		a /= 10;
		len++;
	}
	_putchar(buff, num % 10 + '0');
	return (len + 1);
}
/**
 * print_u - print unsigned int
 * @arg: the variable
 * @buff: Buffer
 * Return: length;
 *
 */
int print_u(va_list arg, char *buff)
{
	unsigned int n = va_arg(arg, unsigned int);
	int len;

	if (n == 0)
	{
		print_number(0, buff);
		return (1);
	}
	len = print_number_u(n, buff);
	return (len);
}
/**
 * print_o - prints octal number (0 - 7)
 * @arg: the variable
 * @buff: Buffer
 * Return: length;
 *
 */
int print_o(va_list arg, char *buff)
{
	unsigned int num = va_arg(arg, unsigned int);
	int len, i;
	int oct[32];

	if (num == 0)
	{
		print_number(0, buff);
		return (1);
	}
	for (len = 0; num > 0; len++)
	{
		oct[len] = num % 8;
		num /= 8;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(buff, oct[i] + '0');
	}
	return (len);
}
/**
 * print_x -print hexadecimal;
 * @arg: the variable
 * @buff: Buffer
 * Return: length;
 *
 */
int print_x(va_list arg, char *buff)
{
	unsigned int num = va_arg(arg, unsigned int);
	int len, i;
	int hex[32];

	if (num == 0)
	{
		print_number(0, buff);
		return (1);
	}
	for (len = 0; num > 0; len++)
	{
		hex[len] = num % 16;
		num /= 16;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (hex[i] < 10)
			_putchar(buff, hex[i] + '0');
		else
			_putchar(buff, hex[i] % 10 + 'a');
	}
	return (len);
}
/**
 * print_X - print hexadecimal in upper case
 * @arg: the variable
 * @buff: Buffer
 * Return: length;
 *
 */
int print_X(va_list arg, char *buff)
{
	unsigned int num = va_arg(arg, unsigned int);
	int len, i;
	int hex[32];

	if (num == 0)
	{
		print_number(0, buff);
		return (1);
	}
	for (len = 0; num > 0; len++)
	{
		hex[len] = num % 16;
		num /= 16;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (hex[i] < 10)
			_putchar(buff, hex[i] + '0');
		else
			_putchar(buff, hex[i] % 10 + 'A');
		len++;
	}
	return (len);
}
