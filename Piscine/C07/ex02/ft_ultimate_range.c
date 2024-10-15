/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:06:15 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/23 20:11:12 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	int	*arr;
	int	i;

	int size = ft_ultimate_range(&arr, 0, 10);

	printf("%i\n\n", size);

	i = 0;
	while (i < 10)
	{
		printf("%i\n", arr[i]);
		i++;
	}
	printf("\n");

	free(arr);
	return (0);
}
*/
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*temp;
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	temp = (int *)malloc(size * sizeof(int));
	if (!temp)
		return (-1);
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	*range = temp;
	return (i);
}
