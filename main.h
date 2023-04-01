#ifndef main_h
#define main_h

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct pf_specifier - the structure
 * @s: the string specifier
 * @f: pointer to function for particular specifier
 * Description: to store the specifier and the function
 */
typedef struct pf_specifier
{
	char *s;
	int (*f)();
} pf_sp;

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
/* Task one functions*/
int print_i(va_list arg, char *buffer);
int print_d(va_list arg, char *buffer);
int print_number(int n, char *buffer);
/* print binary number */
int print_b(va_list arg, char *buffer);
/* Task three functions */
int print_number_u(unsigned int num, char *buff);
int print_u(va_list arg, char *buff);
int print_o(va_list arg, char *buff);
int print_x(va_list arg, char *buff);
int print_X(va_list arg, char *buff);

int print_S(va_list arg, char *buff);
int print_p(va_list arg, char *buff);

#endif
