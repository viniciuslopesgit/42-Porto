
#include <unistd.h>

void	ft_print_combn(int n);
void	ft_putchar(char c);

int	main(void)
{
	ft_print_combn(2);
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	temp1;
	int	temp2;
	int	save_n;

	while (n < 100)
	{
		while ( save_n > 1)
		{
			ft_putchar('0');
			save_n--;
		}
		if ( n >= 10) 
		{
			temp1 = n / 10;
			temp2 = n % 10;

			if (temp1 < temp2)
			{
				ft_putchar(n / 10 + '0');
				ft_putchar(n % 10 + '0');
				
				if (n != 89)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		else
		{
			ft_putchar('0');
			ft_putchar(n + '0');
			ft_putchar(',');
			ft_putchar(' ');
		}
		n++;
	}
	ft_putchar('\n');
}
