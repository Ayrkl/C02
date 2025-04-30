char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i]; 
        i++;
    }

    dest[i] = '\0'; 
    return dest;
}

#include <stdio.h>

int main(void)
{
    char src[] = "Hello 42!";
    char dest[50];

    ft_strcpy(dest, src);

    printf("Kopyalanan yazı: %s\n", dest);
    return 0;
}

