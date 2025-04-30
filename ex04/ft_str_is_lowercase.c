int ft_str_is_lowercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_str_is_lowercase("hello"));     // 1
    printf("%d\n", ft_str_is_lowercase("hello42"));   // 0
    printf("%d\n", ft_str_is_lowercase(""));          // 1
    printf("%d\n", ft_str_is_lowercase("Hello"));     // 0
    printf("%d\n", ft_str_is_lowercase("merhaba"));   // 1
    printf("%d\n", ft_str_is_lowercase("abc123"));    // 0
    return 0;
}