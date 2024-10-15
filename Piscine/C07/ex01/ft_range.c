/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:29:11 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/22 21:18:59 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

int *ft_range(int min, int max);

int	main(int argc, char **argv)
{
	int	*range;
	int	i;
	
	int	num1 = atoi(argv[1]);
	int	num2 = atoi(argv[2]);

	range = ft_range(num1, num2);
	if (range != NULL)
	{
		i = 0;
		while(range[i] != '\0')
		{
			printf("%i, ", range[i]);
			i++;
		}
		free(range);
	}
	return (0);
}
*/
int	*ft_range(int min, int max)
{
	int	i;
	int	*colect_nbr;

	if (min >= max || (min == 0 && max == 0))
		return (NULL);
	colect_nbr = (int *)malloc((max - min) * sizeof(int));
	if (!colect_nbr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		colect_nbr[i] = min;
		i++;
		min++;
	}
	return (colect_nbr);
}
