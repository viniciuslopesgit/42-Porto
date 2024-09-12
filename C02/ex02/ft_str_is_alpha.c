/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:08:16 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/11 18:42:59 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("Alpha:        %i\n", ft_str_is_alpha("abcdefghijkldas"));
	printf("Others:        %i\n", ft_str_is_alpha("Hello Woi90rld!"));
	printf("NULL:        %i\n", ft_str_is_alpha(""));

	return (0);
}
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122)
			|| (str[i] >= 65 && str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}
