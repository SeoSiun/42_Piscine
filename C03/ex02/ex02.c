#include <stdio.h>
#include <string.h>
#include <memory.h>
char* ft_strcat(char *s1, char *s2);

int main(void)
{
    char text1[100] = "Hello 42 ";
    char text2[100] = "Hello 42 ";
    char text3[] = "HeLLoooooo 422222222 ";
    char text4[] = "HIHIHIHIHI Fourty-two ";
	printf("Your   : %s\n", ft_strcat(text1, text3));
	printf("CStdLib: %s\n", strcat(text2, text3));
	printf("Your   : %s\n", ft_strcat(text1, text4));
	printf("CStdLib: %s\n", strcat(text2, text4));
	return 0;
}
