/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:07:43 by vilopes           #+#    #+#             */
/*   Updated: 2024/10/19 21:11:20 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void	ft_putchar(char c);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	ft_putstr(argv[1]);
	return (0);
}
*/

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
