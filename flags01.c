/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** flags01
*/

#include "my_printf.h"

int	spe_op_c(va_list ap)
{
	my_putchar(va_arg(ap, int));
	return (0);
}

int	spe_op_i_d(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
	return (0);
}

int	spe_op_s(va_list ap)
{
	my_putstr(va_arg(ap, char *));
	return (0);
}

int	spe_op_s_maj(va_list ap)
{
	char *S = va_arg(ap, char *);
	unsigned int nb;
	int i = 0;

	while (S[i] != '\0') {
		if (S[i] < 32 || S[i] >= 127) {
			my_putchar(92);
			nb = S[i];
			if (S[i] < 10)
				my_putstr("00");
			else if (S[i] >= 10 && S[i] < 100)
				my_putchar('0');
			octal(nb);
			i += 1;
		}
		else {
			my_putchar(S[i]);
			i += 1;
		}
	}
	return (0);
}

int	spe_op_b(va_list ap)
{
	unsigned int nb = va_arg(ap, int);
	binary(nb);
	return (0);
}
