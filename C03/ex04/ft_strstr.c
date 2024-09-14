/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:01:46 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/14 15:40:17 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *str = "akjslkdjalskjdlkasjldkajsdjjjvacasjjjjjdasdd";
	char *find = "vacas";

	printf("%s", ft_strstr(str,find));
	return (0);
}
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
