char *ft_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}

#include <stdio.h>

int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "Hello123";
    char str3[] = "ALREADY big";
    char str4[] = "";

    printf("%s\n", ft_strlowcase(str1)); // hello
    printf("%s\n", ft_strlowcase(str2)); // hello123
    printf("%s\n", ft_strlowcase(str3)); // already big
    printf("%s\n", ft_strlowcase(str4)); // boş string

    return 0;
}