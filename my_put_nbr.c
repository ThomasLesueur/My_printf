/*
** EPITECH PROJECT, 2017
** my_put_nbr 
** File description:
** zfz
*/

void	my_putchar(char c);
int	my_put_nbr(int nb)
{
	if (nb < 0) {
		nb = nb * -1;
		my_putchar('-');
	}
	if (nb > 9) {
		my_put_nbr(nb / 10);
	}
	my_putchar((nb % 10) + '0');
	return (0);
}

int	my_put_u_nbr(unsigned int nb)
{
	if (nb > 9) {
		my_put_nbr(nb / 10);
	}
	my_putchar((nb % 10) + '0');
	return (0);
}
