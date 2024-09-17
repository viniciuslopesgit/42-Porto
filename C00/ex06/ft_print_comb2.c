
#include <unistd.h>
/*
void	ft_putchar(char c);
void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	short	v[2];
	char	c;

	v[0] = 0;
	while (v[0] <= 98)
	{
		v[1] = v[0] + 1;
		while (v[1] <= 99)
		{
			c = v[0] / 10 + '0';
			ft_putchar(c);
			c = v[0] % 10 + '0';
			ft_putchar(c);

			ft_putchar(' ');

			c = v[1] / 10 + '0';
			ft_putchar(c);
			c = v[1] % 10 + '0';
			ft_putchar(c);

			if (v[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}

			v[1]++;
		}
		v[0]++;
	}
}
