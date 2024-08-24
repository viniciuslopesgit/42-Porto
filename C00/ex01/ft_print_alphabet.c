#include <unistd.h>

void    ft_putchar(char c);
void    ft_print_alphabet(void);

int     main(void)
{
    ft_print_alphabet();
}

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_print_alphabet(void)
{
    char    a = 'a';
    char    z = 'z';

    while(a <= z)
    {
        ft_putchar(a);
        a++;
    }
}