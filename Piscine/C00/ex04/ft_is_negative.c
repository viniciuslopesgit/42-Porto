/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:46:52 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/05 18:56:17 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
}
*/
void	ft_is_negative(int n)
{
	char	no;
	char	yes;

	no = 'N';
	yes = 'P';
	if (n < 0)
	{
		write (1, &no, 1);
	}
	else
	{
		write (1, &yes, 1);
	}
}
