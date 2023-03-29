#ifndef main_h
#define main_h

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
/**
 * pf_spesifier
 * @s: the string specifier
 * @f: pointer to function for particular specifier
 *
 */
typedef struct pf_specifier
{
	char *s;
	int (*f)();
}pf_sp;

/*The printf specifier*/
int (*verify_format(const char *s))();
/*the printf function*/
int _printf(const char *format, ...);
/* buffer functions */
int buffer_add(char *buff, char c);
void buffer_print(char *buff, int size);
int buffer_position(char *buff);
char *buff_flush(char *buff);
char *init_buff();
int _putchar(char *buff, char s);
/* task zero functions */
int print_string(va_list args, char *buffer);
int print_char(va_list args, char *buffer);
int print_string(va_list args, char *buffer);
int print_percent(va_list arg, char *buffer);

#endif
