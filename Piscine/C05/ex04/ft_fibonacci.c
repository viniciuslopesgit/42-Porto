/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:52:47 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/18 21:40:16 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_fibonacci(int index);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);

	int	n;
	int	res;

	n = ft_atoi(argv[1]);
	res = ft_fibonacci(n - 1);

	printf("Index:		%i\n\n", res);

	int	i;

	i = 0;
	while (i < n)
	{
		printf("%i", ft_fibonacci(i));
		if (i < n - 1)
			printf(", ");
		i++;
	}
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
	while (str[i] == '-' || (str[i] >= 9 && str[i] <= 13))
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
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result + sign);
}
*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
