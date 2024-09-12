/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:14:48 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/11 18:55:02 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
//	char	teste[20] = "1233ia546546464";
	printf("Res1:	%i\n", ft_str_is_numeric("0123456789"));
	printf("Res2:	%i\n", ft_str_is_numeric("123456789a"));
	printf("Res3:	%i\n", ft_str_is_numeric(""));
	return 0;
}
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
