int is_alpha_numeric(char c)
{
    return ((c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9'));
}

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new_word = 1;

    while (str[i] != '\0')
    {
        // Tüm harfleri küçült
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

        // Eğer kelime başı ise ve harfse, büyüt
        if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] -= 32;
            new_word = 0;
        }
        else if (!is_alpha_numeric(str[i]))
            new_word = 1;
        else
            new_word = 0;

        i++;
    }

    return str;
}

#include <stdio.h>

int main(void)
{
    char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char str2[] = "heLLo WoRLd! TEST123+yoU";

    printf("%s\n", ft_strcapitalize(str1));
    printf("%s\n", ft_strcapitalize(str2));

    return 0;
}



