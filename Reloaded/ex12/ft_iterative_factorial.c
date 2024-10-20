/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:13:06 by vilopes           #+#    #+#             */
/*   Updated: 2024/10/18 21:23:48 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb);

int	main(int argc, char **argv)
{
	ft_iterative_factorial(atoi(argv[1]));
	return (0);
}
*/
int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	if (nb < 0 || nb > 16)
		return (0);
	i = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
