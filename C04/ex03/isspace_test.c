#include <ctype.h>
#include <stdio.h>

int main(void)
{
	unsigned char c = 0;
	while (c != 255)
	{
		if ( isspace(c))
			printf("%d : %c\n", c, c);
		c++;
	}
}
