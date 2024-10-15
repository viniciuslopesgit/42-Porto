/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:00:07 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/25 21:03:20 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	v[0] = 0;
	while (v[0] <= 98)
	{
		v[1] = v[0] + 1;
		while (v[1] <= 99)
		{
			ft_putchar((v[0] / 10) + '0');
			ft_putchar((v[0] % 10) + '0');
			ft_putchar(' ');
			ft_putchar(v[1] / 10 + '0');
			ft_putchar(v[1] % 10 + '0');
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
