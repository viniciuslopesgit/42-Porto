/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:22:16 by vilopes           #+#    #+#             */
/*   Updated: 2024/10/20 03:18:00 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n);
void	ft_putchar(char c);
/*
int	main(void)
{
	ft_is_negative(42);
	ft_is_negative(0);
	ft_is_negative(-1);
	return (0);
}
*/

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
