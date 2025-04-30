char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    // src dizisinden n kadar karakteri kopyala
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    // Eğer src biterse, kalan yerleri \0 ile doldur
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

#include <stdio.h>

int main(void)
{
    char src[] = "okul!";
    char dest[20];

    ft_strncpy(dest, src, 5);
    dest[5] = '\0'; // güvenlik için elle sonlandırma

    printf("Kopyalanan yazı: %s\n", dest);
    return 0;
}