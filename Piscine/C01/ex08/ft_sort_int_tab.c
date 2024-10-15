/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:50:27 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/08 23:51:51 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[7] = {4,1,5,3,0,2,7};
	int	size = 7;

	ft_sort_int_tab(tab,size);
	printf("%i %i %i %i %i %i %i", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
	return 0;
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}
