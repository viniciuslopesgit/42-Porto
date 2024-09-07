/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:42:02 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/05 18:46:16 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
}
*/
void	ft_print_numbers(void)
{
	char	n;

	n = 48;
	while (n <= 57)
	{
		write(1, &n, 1);
		n++;
	}
}
