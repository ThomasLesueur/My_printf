/*
** EPITECH PROJECT, 2017
** my_printf 
** File description:
** convert functions 
*/

#include "my_printf.h"

int	binary(unsigned int nb)
{
	unsigned int	mem;

	if (nb > 0) {
		mem = nb % 2;
		binary(nb / 2);
		my_put_u_nbr(mem);
	}
	return (0);
}

int	octal(unsigned int nb)
{
	unsigned int	mem;

	if (nb > 0) {
		mem = nb % 8;
		octal(nb / 8);
		my_put_u_nbr(mem);
	}
	return (0);
}

int	hex_min(unsigned int nb)
{
	unsigned int	mem;

	if (nb > 0) {
		mem = nb % 16;
		if (mem <= 9) {
			hex_min(nb / 16);
			my_putchar(mem + '0');
		}
		else if (mem > 9 && mem <= 15) {
			hex_min(nb / 16);
			my_putchar(mem + '0' + 39);
		}
	}
	return (0);
}

int	hex_cap(unsigned int nb)
{
	unsigned int	mem;

	if (nb > 0) {
		mem = nb % 16;
		if (mem <= 9) {
			hex_cap(nb / 16);
			my_putchar(mem + '0');
		}
		else if (mem > 9 && mem <= 15) {
			hex_cap(nb / 16);
			my_putchar(mem + '0' + 7);
		}
	}
	return (0);
}
