unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;

    // Eğer size 0 ise kopyalama yapma
    if (size == 0)
        return 0;

    // src'yi dest'e kopyala
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }

    // Null terminator ekle
    dest[i] = '\0';

    // src uzunluğunu döndür
    while (src[i] != '\0')
    {
        i++;
    }

    return i; // src'nin toplam uzunluğunu döndür
}

#include <stdio.h>

int main(void)
{
    char dest[20];
    char src[] = "Hello, World!";

    unsigned int result = ft_strlcpy(dest, src, 10);
    printf("Dest: %s\n", dest); // Hello
    printf("Result: %u\n", result); // 13 (src'nin uzunluğu)

    return 0;
}

