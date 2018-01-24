/*
** EPITECH PROJECT, 2017
** my_printf 
** File description:
** flags02
*/

#include "my_printf.h"

int	spe_op_x(va_list ap)
{
	unsigned int nb = va_arg(ap, int);

	hex_min(nb);
	return (0);
}

int	spe_op_x_maj(va_list ap)
{
	unsigned int nb = va_arg(ap, int);

	hex_cap(nb);
	return (0);
}

int	spe_op_o(va_list ap)
{
	unsigned int nb = va_arg(ap, int);

	octal(nb);
	return (0);
}

int	spe_op_u(va_list ap)
{
	unsigned int nb = va_arg(ap, int);

	my_put_u_nbr(nb);
	return (0);
}

int	spe_op_p(va_list ap)
{
	return (0);
}
