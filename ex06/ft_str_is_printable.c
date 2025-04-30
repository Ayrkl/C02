int ft_str_is_printable(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 126)
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
    printf("%d\n", ft_str_is_printable("Hello!"));       // 1
    printf("%d\n", ft_str_is_printable("Line\nBreak"));  // 0
    printf("%d\n", ft_str_is_printable(""));             // 1
    printf("%d\n", ft_str_is_printable("1234567890"));   // 1
    printf("%d\n", ft_str_is_printable("\x7F"));         // 0
    printf("%d\n", ft_str_is_printable("Tab\tChar"));    // 0
    return 0;
}

