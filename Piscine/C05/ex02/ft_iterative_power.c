/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:26:54 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/18 21:45:37 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_iterative_power(int nb, int power);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;

	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[2]);
	printf("Number:		%s\n", argv[1]);
	printf("Power:		%s\n", argv[2]);
	printf("Result:		%i\n", ft_iterative_power(num1, num2));
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
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;	

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
