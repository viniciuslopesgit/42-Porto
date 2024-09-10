/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:40:45 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/10 23:07:59 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return 0;
}
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check_init;

	check_init = 0;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
		{
			if ((str[i] >= 97) && (str[i] <= 122) && !check_init)
			{
				str[i] -= 32;
				check_init = 1;
			}
			else
				check_init = 1;
		}
		else
			check_init = 0;
		i++;
	}
	return (str);
}
