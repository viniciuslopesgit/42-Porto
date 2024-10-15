/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:59:23 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/25 21:08:24 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_combn(int n);
void	ft_putchar(char c);
int		ft_atoi(char *str);

int	main(int argc, char **argv)
{
	ft_print_combn(ft_atoi(argv[1]));
	return (0);
}
*/
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_atoi(char *str)
{
	int		result;
	int		sign;
	int		i;

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

void	ft_print_combn(int n)
{
	int		i;
	int		j;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			ft_putchar(i + '0');
			ft_putchar(j + '0');
			if (i != 8 || j != 9)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}
