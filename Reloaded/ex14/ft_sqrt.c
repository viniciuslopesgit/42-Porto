/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 20:55:45 by vilopes           #+#    #+#             */
/*   Updated: 2024/10/19 21:07:08 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_sqrt(int nb);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	printf("Result: %i", ft_sqrt(ft_atoi(argv[1])));
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

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
		result = (result * 10 + str[i] - 48);
		i++;
	}
	return (result * sign);
}
*/
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb >= 0)
	{
		while ((i * i) < nb)
		{
			i++;
		}
		if (i * i > nb)
			return (0);
		else if ((i * i) == nb)
			return (i);
	}
	return (0);
}
