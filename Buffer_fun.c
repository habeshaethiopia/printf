#include "main.h"
/**
 * init_buff - function to allocate memory to buff and initialize it
 * Return: pointer to buffer
 *
 */
char *init_buff()
{
	char *buff = malloc(sizeof(char) * 1024);

	if (buff)
		buff = buff_flush(buff);
	return (buff);
}
/**
 * buff_flush - initiatize the buff to zero
 * @buff: the intitiation variable
 * Return: the pointer to buff
 *
 */
char *buff_flush(char *buff)
{
	int i;

	for (i = 0; i < 1023; i++)
		buff[i] = 0;
	return (buff);
}
/**
 * buffer_position - position of buffer
 * @buff: the buffer
 * Return: the position of buffer
 *
 */
int buffer_position(char *buff)
{
	int i = 0;
	char *p = buff;

	while (p[i] != '\0')
		i++;
	return (i);
}
/**
 * buffer_print - prints the buff
 * @buff: printed string
 * @size: the buff size
 *
 */
void buffer_print(char *buff, int size)
{
	write(1, buff, size);
}
/**
 * buffer_add - add char to the buffer
 * @buff: the buffer
 * @c: the char that will add to buffer
 * Return: the buffer length
 */
int buffer_add(char *buff, char c)
{
	int i = buffer_position(buff);

	if (i < 1023)
		buff[i] = c;
	else
	{
		buffer_print(buff, 1023);
		buff = buff_flush(buff);
		buff[0] = c;
	}
	return (i);
}
