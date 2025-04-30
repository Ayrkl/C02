int ft_str_is_alpha(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        // Harf değilse 0 döndür
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z')))
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
    printf("%d\n", ft_str_is_alpha("Hello"));      // 1
    printf("%d\n", ft_str_is_alpha("Hello42"));    // 0
    printf("%d\n", ft_str_is_alpha(""));           // 1
    printf("%d\n", ft_str_is_alpha("MerhabaDunya"));// 1
    printf("%d\n", ft_str_is_alpha("42Okul"));     // 0
    return 0;
}