#include "main.h"

/**
 * print_d - print decimal integer
 * @arg: the variadic argument
 * @buff: the buffer
 * Return: the size
 */
int print_d(va_list arg, char *buff)
{
	int num, len;

	num = va_arg(arg, int);
	len = print_number(num, buff);

	return (len);
}
/**
 * print_num - print numbers
 * @n: argument to print
 * @buff: Buffer
 * Return: length of @arg
 *
 */
int print_number(int n, char *buff)
{
	int k, l, len = 0;

	k = 1;
	l = n;
	if (n < 0)
	{
		k = k * -1;
		_putchar(buff, '-');
		len++;
	}
	while (l > 9 || l < -9)
	{
		l = l / 10;
		k = k * 10;
	}
	while (k > 9 || k < -9)
	{
		_putchar(buff, (n / k) % 10 + '0');
		k = k / 10;
		len++;
	}
	if (n < 0)
	{
		_putchar(buff, (n % 10) * -1 + '0');
		len++;
	}
	else
	{
		_putchar(buff, n % 10 + '0');
		len++;
	}

	return (len);
}
/**
 * print_i - prints integer
 * @arg: argument to print
 * @buff: the Buffer
 * Return: length
 *
 */
int print_i(va_list arg, char *buff)
{
	int num, len;

	num = va_arg(arg, int);
	len = print_number(num, buff);

	return (len);
}
