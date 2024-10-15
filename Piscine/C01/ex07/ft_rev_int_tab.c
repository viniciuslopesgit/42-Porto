/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:25:55 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/08 20:49:21 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int 	main(void)
{
	int	tab[6] = {0,1,2,3,4,5};
	int	size = 6;

	ft_rev_int_tab(tab, size);
	printf(" %i %i %i %i %i %i",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
	return 0;
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size -1) - i] = swap;
		i++;
	}
}
