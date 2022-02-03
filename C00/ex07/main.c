#include "ft_putnbr.c"
#include <stdio.h>

int main(){
	ft_putnbr(12225281);
	write(1,"\n",1);
	ft_putnbr(2147483647);
	write(1,"\n",1);
	ft_putnbr(-47483648);
	write(1,"\n",1);
	ft_putnbr(-2147483648);
	write(1,"\n",1);
	ft_putnbr(-2147483647);
	write(1,"\n",1);
	ft_putnbr(0);
	write(1,"\n",1);	
	ft_putnbr(-1);
}
