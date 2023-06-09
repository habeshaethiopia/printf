#include "main.h"
/**
 * _printf - the function exactly work like printf function
 * @format: the string format that prints in the console
 * Return: the number of character printed excluding the terminate character
 *
 */
int _printf(const char *format, ...)
{
	int len = 0;
	const char *p;
	int (*fun)(va_list, char *);
	va_list arg;
	char *buffer = init_buff();

	if (!buffer)
		return (0);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		free(buffer);
		return (-1);
	}
	va_start(arg, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			fun = verify_format(p);
			if (fun)
			{
				len += fun(arg, buffer);
				p++;
			}
			else
			{
				_putchar(buffer, *p);
				len++;
			}
		}
		else
		{
			_putchar(buffer, *p);
			len++;
		}
	}
	va_end(arg);
	buffer_print(buffer, buffer_position(buffer));
	free(buffer);
	return (len);
}
