/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:40:21 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/05 18:40:46 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 97)
	{
		write (1, &z, 1);
		z--;
	}
}
