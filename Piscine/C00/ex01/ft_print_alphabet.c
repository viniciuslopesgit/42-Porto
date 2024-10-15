/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 23:49:24 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/04 23:52:44 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
}
*/
void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 122)
	{
		write (1, &a, 1);
		a++;
	}
}
