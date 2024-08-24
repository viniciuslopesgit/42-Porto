#include <unistd.h>

void ft_putchar(char c);
void ft_print_numbers(void);

/*
int     main(void)
{
    ft_print_numbers();
}
*/

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_print_numbers(void)
{
    char    num = 48;

    while (num <= 57)
    {
        ft_putchar(num);
        num++;
    }
}
