#include "main.h"

/**
 * print_fmt - Select the right format and print
 * @c: Character specifier
 * @args: va_list argument
 * @buffer: The buffer
 * @buff_i: buffer count
 * Return: number of printed characters
 */
int print_fmt(char c, va_list args, char *buffer, int *buff_i)
{
	fmt_t fmts[] = {
		{ 'c', print_char },
		{ 's', print_str },
		{ 'i', print_int },
		{ 'd', print_int },
		{ 'b', print_bnry },
		{ 'u', print_u_int },
		{ 'o', print_octal },
		{ 'x', print_hex_lower },
		{ 'X', print_hex_upper }
	};
	int i = 0;

	while (i < 9)
	{
		if (fmts[i].c == c)
		{
			return (fmts[i].prnt(args, buffer, buff_i));
		}
		i++;
	}
	return (-1);
}
