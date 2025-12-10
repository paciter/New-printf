#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int n = 42;
    char *str = "Hello";
    void *ptr = &n;

    // ----- CHAR -----
    ft_printf("ft_printf char: %c\n", 'A');
    printf("printf     char: %c\n\n", 'A');

    // ----- STRING -----
    ft_printf("ft_printf string: %s\n", str);
    printf("printf     string: %s\n\n", str);

    // ----- INT -----
    ft_printf("ft_printf int: %d %i\n", n, -n);
    printf("printf     int: %d %i\n\n", n, -n);

    // ----- UNSIGNED -----
    ft_printf("ft_printf unsigned: %u\n", 3000000000u);
    printf("printf     unsigned: %u\n\n", 3000000000u);

    // ----- HEX -----
    ft_printf("ft_printf hex: %x %X\n", 255, 255);
    printf("printf     hex: %x %X\n\n", 255, 255);

    // ----- POINTER -----
    ft_printf("ft_printf pointer: %p\n", ptr);
    printf("printf     pointer: %p\n\n", ptr);

    // ----- PERCENT -----
    ft_printf("ft_printf percent: %%\n");
    printf("printf     percent: %%\n\n");

    return 0;
}

