/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:57:22 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/05 19:57:11 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_impress(int a, int b, int c);
void	ft_print_comb(void);
/*
int	main(void)
{
	ft_print_comb();
}
*/

void	ft_impress(int a, int b, int c)
{
	while (a <= '7')
	{
		b = a +1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a < '7')
				{
					write (1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = a + 1;
	c = b + 1;
	ft_impress(a, b, c);
}
