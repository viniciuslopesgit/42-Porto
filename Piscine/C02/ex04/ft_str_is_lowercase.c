/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:26:02 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/11 18:56:28 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("Resposta 1:     %i\n", ft_str_is_lowercase("helloworld"));
	printf("Resposta 2:	%i\n", ft_str_is_lowercase("Hello, World!"));
	printf("Resposta 3:     %i\n", ft_str_is_lowercase(""));

	return (0);
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}
