#include "main.h"
/**
 * print_hexa - prints Hexadecimals in Upper case
 * @s: char to hexa
 * @buff: the buffer
 * Return: length
 *
 */
int print_hexa(char s, char *buff)
{
	char num;
	int l, l2, result[32], i;

	l2 = 0;

	num = s;

	if (num < 16)
	{
		_putchar(buff, '0');
		l2++;
	}
	for (l = 0; num > 0; l++)
	{
		result[l] = num % 16;
		num = num / 16;
	}
	for (i = l - 1; i >= 0; i--)
	{
		if (result[i] >= 10)
			_putchar(buff, result[i] + 55);
		else
			print_number(result[i], buff);
	}
	return (l + l2);
}
/**
 * print_S - print a string
 * @args: Argument to print.
 * @buffer: Buffer.
 * Return: length of args
 */
int print_S(va_list args, char *buffer)
{
	char *s = va_arg(args, char *);
	int l, i, c;

	c = 0;
	if (s)
	{
		l = strlen(s);
		for (i = 0; i < l; i++)
			if (s[i] < 32 || s[i] >= 127)
			{
				_putchar(buffer, '\\');
				c++;
				_putchar(buffer, 'x');
				if (*(s + i) == '\0')
					c += print_hexa(0, buffer);
				else
					c += print_hexa(*(s + i), buffer);
			}
			else
				_putchar(buffer, *(s + i));
	}
	else
	{
		l = 6;
		s = "(null)";
		for (i = 0; i < l; i++)
			_putchar(buffer, *(s + i));
	}
	return (l + c);
}
