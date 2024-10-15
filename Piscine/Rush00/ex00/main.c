/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:55:29 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/08 18:03:03 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rush(int x, int y);
void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_str(char *str);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc < 3)
	{
		ft_str("Argumentos insuficientes! Apenas 2 argumentos aceites!");
		return (0);
	}
	else if (argc > 3)
	{
		ft_str("Demasiados argumentos! Apenas 2 argumentos aceites!");
		return (0);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	if (x <= 0 || y <= 0)
	{
		ft_str("Insira um valor válido!!!");
		return (0);
	}
	rush(x, y);
	return (0);
}
