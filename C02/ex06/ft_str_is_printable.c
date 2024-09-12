/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:35:22 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/11 19:11:11 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	printf("%i\n",ft_str_is_printable("[][][234234ada[sda]"));
	printf("%i\n",ft_str_is_printable("\t"));
	printf("%i\n",ft_str_is_printable(""));
	return 0;
}
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
