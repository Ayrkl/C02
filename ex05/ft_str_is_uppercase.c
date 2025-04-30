int ft_str_is_uppercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
    printf("%d\n", ft_str_is_uppercase("HELLO"));     // 1
    printf("%d\n", ft_str_is_uppercase("HELLO42"));   // 0
    printf("%d\n", ft_str_is_uppercase(""));          // 1
    printf("%d\n", ft_str_is_uppercase("HelLo"));     // 0
    printf("%d\n", ft_str_is_uppercase("WELCOME"));   // 1
    printf("%d\n", ft_str_is_uppercase("WELCOME!"));  // 0
    return 0;
}


