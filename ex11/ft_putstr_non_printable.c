#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    int i;
    char hex[2];

    i = 0;
    while (str[i] != '\0') // Diziyi sonuna kadar kontrol et
    {
        if (str[i] >= 32 && str[i] <= 126) // Yazdırılabilir karakterler
        {
            write(1, &str[i], 1); // Yazdırılabilir karakteri ekrana bas
        }
        else // Yazdırılamaz karakterler
        {
            hex[0] = "0123456789abcdef"[str[i] / 16]; // Onaltılık ilk basamayı bul
            hex[1] = "0123456789abcdef"[str[i] % 16]; // Onaltılık ikinci basamayı bul
            write(1, "\\x", 2); // \x'yi yazdır
            write(1, hex, 2); // Onaltılık değeri yazdır
        }
        i++;
    }
}

#include <stdio.h>

int main(void)
{
    char test_str[] = "Hello\x01World!";
    ft_putstr_non_printable(test_str);
    return 0;
}

