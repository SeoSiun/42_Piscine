#include "./ex00/ft_putchar.c"
#include "./ex01/ft_print_alphabet.c"
#include "./ex02/ft_print_reverse_alphabet.c"
#include "./ex03/ft_print_numbers.c"
#include "./ex04/ft_is_negative.c"
#include "./ex05/ft_print_comb.c"
#include "./ex06/ft_print_comb2.c"
#include "./ex07/ft_putnbr.c"
#include "./ex08/ft_print_combn.c"

int main(){
	ft_putchar('A');
	ft_putchar('n');
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_alphabet();
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_numbers();
	ft_putchar('\n');
	ft_putchar('\n');
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-10);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_comb();
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_comb2();
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putnbr(12225281);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-47483648);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_combn(1);
	ft_putchar('\n');
	ft_print_combn(2);
	ft_putchar('\n');
	ft_print_combn(5);
	ft_putchar('\n');
	ft_print_combn(9);
	ft_putchar('\n');
	return 0;
}
