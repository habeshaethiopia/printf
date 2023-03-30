#include "main.h"
/**
 * print_b - a function to print a binary number 0 & 1;
 * @arg: variadic function;
 * @buff: the buffer
 * Return: number of binary digits
 *
 */
int print_b(va_list arg, char *buff)
{
	int len, i;
	unsigned int num;
	int result[32];

	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		print_number(0, buff);
		return (1);
	}
	for (len = 0; num > 0; len++)
	{
		result[len] = num % 2;
		num /= 2;
	}
	for (i = len - 1; i >= 0; i--)
		print_number(result[i], buff);
	return (len);
}
