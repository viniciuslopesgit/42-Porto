/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:55:16 by vilopes           #+#    #+#             */
/*   Updated: 2024/10/20 01:34:15 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

int	*ft_range(int min, int max);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int	*range;
	int	i;

	int	num1 = ft_atoi(argv[1]);
	int	num2 = ft_atoi(argv[2]);
	if (argc < 2)
		return (1);
	else
	{
		range = ft_range(num1, num2);
		if (range != NULL)
		{
			i = 0;
			while (range[i])
			{
				printf("%i, ", range[i]);
				i++;
			}
			free(range);
		}
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
*/
int	*ft_range(int min, int max)
{
	int	*mem;
	int	i;

	if (min >= max || (min == 0 && max == 0))
		return (NULL);
	mem = (int *)malloc((max - min) * sizeof(int));
	if (!mem)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		mem[i] = min;
		i++;
		min++;
	}
	return (mem);
}
