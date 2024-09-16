/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:54:54 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/16 19:44:30 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdlib.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "Error, insert a valid value.\n",29);
	else
		ft_putnbr(atoi(argv[1]));
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	nb_print;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", 10);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + '0');
		}
		if (nb < 10 && nb >= 0)
		{
			nb_print = nb + '0';
			ft_putchar(nb_print);
		}
	}
}
