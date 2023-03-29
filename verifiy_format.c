#include "main.h"
/**
 * verify_format - verifies format
 * @s: the string to verifiy
 * Return: afunction to execute;
 *
 */
int (*verify_format(const char *s))()
{
	pf_sp options[] = {
		{"%", print_percent},
		{"s", print_string},
		{"c", print_char},
		{"d", print_d},
		{"i", print_i}
	};
	int i;
	const char *p = s;

	p++;
	if (*p != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*options[i].s == p[0])
				return (options[i].f);
		}
	}
	return (NULL);
}
