#include <unistd.h>

void    ft_putchar(char c);
void    ft_print_reverse_alphabet(void);

int     main(void)
{
    ft_print_reverse_alphabet();
}

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_print_reverse_alphabet(void)
{
    char    a = 'a';
    char    z = 'z';

    while (z >= a)
    {
        ft_putchar(z);
        z--;
    }
}
