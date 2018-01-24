/*
** EPITECH PROJECT, 2017
** my_printf 
** File description:
** .h file with all prototypes and macros 
*/

#ifndef		_MY_PRINTF_H_
#define		_MY_PRINTF_H_

#include <stdarg.h>
#include <stdlib.h>

/*--------MACROS--------*/

#define FLAGS (s[i + 1] == 'c' || s[i + 1] == 'd' ||s[i + 1] == 'i' || s[i + 1] == 's' || s[i + 1] == 'S' || s[i + 1] == 'x' || s[i + 1] == 'X' || s[i + 1] == 'b' || s[i + 1] == 'o' || s[i + 1] == 'u' || s[i + 1] == 'p')

#define NO_FLAGS (s[i + 1] != 'c' || s[i + 1] != 'd' ||s[i + 1] != 'i' || s[i + 1] != 's' || s[i + 1] != 'S' || s[i + 1] != 'x' || s[i + 1] != 'X' || s[i + 1] != 'b' || s[i + 1] != 'o' || s[i + 1] != 'u' || s[i + 1] != 'p' || s[i + 1] != '%')

#define CALL_STRUCT {{'c', &spe_op_c}, {'d', &spe_op_i_d}, {'i', &spe_op_i_d}, {'s', &spe_op_s}, {'S', &spe_op_s_maj}, {'x', &spe_op_x}, {'X', &spe_op_x_maj}, {'b', &spe_op_b}, {'o', &spe_op_o}, {'u', &spe_op_u}, {'p', &spe_op_p}}

/*--------STRUCT--------*/

struct alpha
{
	char flag;
	int(*spe_op)(va_list);
};

/*------PROTOTYPES------*/

/*       COND FUNCTIONS		*/
int display_condition01(int i, char *s);
int display_condition02(int i, char *s);

/*      DISPLAY FUNCTIONS	*/
void	my_putchar(char c);
int	my_putstr(char const *str);
int	my_put_nbr(int nb);
int	my_put_u_nbr(unsigned int nb);

/*      CONVERSION FUNCTIONS	*/
int	binary(unsigned int);
int	octal(unsigned int);
int	hex_min(unsigned int);
int	hex_cap(unsigned int);

/*      FLAGS FUNCTIONS		*/
int	spe_op_c(va_list ap);
int	spe_op_d(va_list ap);
int	spe_op_i_d(va_list ap);
int	spe_op_s(va_list ap);
int	spe_op_s_maj(va_list ap);
int	spe_op_x(va_list ap);
int	spe_op_x_maj(va_list ap);
int	spe_op_b(va_list ap);
int	spe_op_o(va_list ap);
int	spe_op_u(va_list ap);
int	spe_op_p(va_list ap);

#endif		/*_MY_PRINTF_H_*/
