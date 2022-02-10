#include <stdio.h>
#include <string.h>
#include <memory.h>
char* ft_strncat(char *s1, char *s2, unsigned int nb);

int main(void)
{
    char text1[100] = "Hello 42 ";
    char text2[100] = "Hello 42 ";
    char text3[] = "HeLLoooooo 422222222 ";
    char text4[] = "HIHIHIHIHI Fourty-two ";
	printf("Your   : %s\n", ft_strncat(text1, text3, 100));
	printf("CStdLib: %s\n", strncat(text2, text3, 100));
	printf("Your   : %s\n", ft_strncat(text1, text4, 2));
	printf("CStdLib: %s\n", strncat(text2, text4, 2));
	return 0;
}
