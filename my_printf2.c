/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf function 2
*/

#include "my_printf.h"

int	display_condition01(int i, char *s)
{
	if (s[i] != '%')
		my_putchar(s[i]);
	return (0);
}

int	display_condition02(int i, char *s)
{
	if (s[i] == '%' && s[i + 1] == '%')
		my_putchar(s[i + 1]);
	return (0);
}

int	my_printf(char *s, ...)
{
	int i = 0;
	int count = 0;
	va_list ap;
	struct alpha SPE_OP[] = CALL_STRUCT;

	va_start(ap, s);
	while (s[i] != '\0') {
		display_condition01(i, s);
		if (s[i] == '%' && FLAGS) {
			i += 1;
			while (SPE_OP[count].flag != s[i])
				count += 1;
			SPE_OP[count].spe_op(ap);
			count = 0;
		}
		display_condition02(i, s);
		i += 1;
	}
	va_end(ap);
	return (0);
}
