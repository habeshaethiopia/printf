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
		{"i", print_i},
		{"b", print_b},
		{"u", print_u},
		{"x", print_x},
		{"o", print_o},
		{"X", print_X},
		{"S", print_S},
		{"p", print_p}
	};
	int i;
	const char *p = s;

	p++;
	if (*p != '\0')
	{
		for (i = 0; i < 11; i++)
		{
			if (*options[i].s == p[0])
				return (options[i].f);
		}
	}
	return (NULL);
}
