char *ft_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}

#include <stdio.h>

int main(void)
{
    char str1[] = "hello";
    char str2[] = "Hello123";
    char str3[] = "already BIG";
    char str4[] = "";

    printf("%s\n", ft_strupcase(str1)); // HELLO
    printf("%s\n", ft_strupcase(str2)); // HELLO123
    printf("%s\n", ft_strupcase(str3)); // ALREADY BIG
    printf("%s\n", ft_strupcase(str4)); // boş string

    return 0;
}