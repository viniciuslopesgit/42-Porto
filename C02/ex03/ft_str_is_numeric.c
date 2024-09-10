/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:14:48 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/09 23:24:54 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	teste[20] = "1233ia546546464";
	printf("%i", ft_str_is_numeric(teste));
	return 0;
}
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57))
			i++;
		else
			return (0);
	}
	return (1);
}
