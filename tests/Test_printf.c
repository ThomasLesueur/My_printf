/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** Tests for my_printf
*/

#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_printf(char *s, ...);

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, simple_tests, .init = redirect_all_std)
{
	my_printf("Hello ta MERE");
	cr_assert_stdout_eq_str("Hello ta MERE");
}

Test(my_printf, disp_int, .init = redirect_all_std)
{
	int nb = 100000;
	my_printf("Le nombre est %d", nb);
	cr_assert_stdout_eq_str("Le nombre est 100000");
}

Test(my_printf, disp_int2, .init = redirect_all_std)
{
	int nb = 0;
	my_printf("Le nombre est %i", nb);
       cr_assert_stdout_eq_str("Le nombre est 0");
}

Test(my_printf, lv_sup_tests, .init = redirect_all_std)
{
	int nb = 10;
	char tab[] = "Omae wa nou shindeiru";
	char c = 'A';

	my_printf("COUCOU %c %d %s", c, nb, tab);
	cr_assert_stdout_eq_str("COUCOU A 10 Omae wa nou shindeiru");
}

/*Test(my_printf, insane_lv, .init = redirect_all_std)
{
	my_printf("%k\n");
	cr_assert_stdout_eq_str("%k\n");
}

Test(my_printf, insane_lv2, .init = redirect_all_std)
{
	my_printf("%%\n");
	cr_expect_stdout_eq_str("%\n");
}


Test(my_printf, insane_lv3, .init = redirect_all_std)
{
	my_printf("% %\n");
	cr_assert_stdout_eq_str("%\n");
}
*/
Test(my_printf, binary_convert, .init = redirect_all_std)
{
	unsigned int nb = 10;
	my_printf("%b", nb);
	cr_assert_stdout_eq_str("1010");
}

Test(my_printf, binary_convert02, .init = redirect_all_std)
{
	unsigned int nb = 3292629;
	my_printf("%b", nb);
	cr_assert_stdout_eq_str("1100100011110111010101");
}

Test(my_printf, octal_convert, .init = redirect_all_std)
{
	unsigned int nb = 10;
	my_printf("%o", nb);
	cr_assert_stdout_eq_str("12");
}

Test(my_printf, octal_convert02, .init = redirect_all_std)
{
	unsigned int nb = 3292629;
	my_printf("%o", nb);
	cr_assert_stdout_eq_str("14436725");
}

Test(my_printf, decimal_convert, .init = redirect_all_std)
{
	unsigned int nb = 10;
	my_printf("%u", nb);
	cr_assert_stdout_eq_str("10");
}

Test(my_printf, decimal_convert02, .init = redirect_all_std)
{
	unsigned int nb = 3292629;
	my_printf("%u", nb);
	cr_assert_stdout_eq_str("3292629");
}

Test(my_printf, hex_convert, .init = redirect_all_std)
{
	unsigned int nb = 10;
	my_printf("%x", nb);
	cr_assert_stdout_eq_str("a");
}

Test(my_printf, hex_convert02, .init = redirect_all_std)
{
	unsigned int nb = 3292629;
	my_printf("%x", nb);
	cr_assert_stdout_eq_str("323dd5");
}

Test(my_printf, hex_convert_X, .init = redirect_all_std)
{
	unsigned int nb = 10;
	my_printf("%X", nb);
	cr_assert_stdout_eq_str("A");
}

Test(my_printf, hex_convert_X02, .init = redirect_all_std)
{
	unsigned int nb = 3292629;
	my_printf("%X", nb);
	cr_assert_stdout_eq_str("323DD5");
}

Test(my_printf, display_S, .init = redirect_all_std)
{
	char str[] = "toto";
	str[1] = 6;
	my_printf("%S", str);
	cr_assert_stdout_eq_str("t\\006to");
}

Test(my_printf, display_S2, .init = redirect_all_std)
{
	char str[] = "toto";
	my_printf("%S", str);
	cr_assert_stdout_eq_str("toto");
}
