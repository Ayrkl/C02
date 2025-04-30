int ft_str_is_numeric(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
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
    printf("%d\n", ft_str_is_numeric("123456"));     // 1
    printf("%d\n", ft_str_is_numeric("abc123"));     // 0
    printf("%d\n", ft_str_is_numeric(""));           // 1
    printf("%d\n", ft_str_is_numeric("00000123"));   // 1
    printf("%d\n", ft_str_is_numeric("12 34"));      // 0
    printf("%d\n", ft_str_is_numeric("-123"));       // 0
    return 0;
}

