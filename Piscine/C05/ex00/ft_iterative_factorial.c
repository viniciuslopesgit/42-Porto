/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:50:26 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/18 18:24:56 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_iterative_factorial(int nb);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	char	*num;
	int	num2;
	if (argc != 2)
		return (0);
	num = argv[1];
	num2 = ft_atoi(num);
	printf("%i\n", ft_iterative_factorial(num2));
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
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
*/
int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	if (nb < 0)
		return (0);
	i = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
