/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:10:00 by vilopes           #+#    #+#             */
/*   Updated: 2024/10/18 21:14:11 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_putchar(char c);
void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}
