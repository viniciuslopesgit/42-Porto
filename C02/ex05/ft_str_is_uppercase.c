/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:31:22 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/11 19:03:59 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%i\n",ft_str_is_uppercase("HELLOWORLD"));
	printf("%i\n",ft_str_is_uppercase("Hello, World!"));
	printf("%i\n",ft_str_is_uppercase(""));
	return 0;
}
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
