#include <unistd.h>
#include "ft_putstr_non_printable.c"

int main (void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien");
	write(1,"\n",1);
	ft_putstr_non_printable("Coucou tu vas bie\t\vn");
	write(1,"\n",1);
	ft_putstr_non_printable("");
} 
