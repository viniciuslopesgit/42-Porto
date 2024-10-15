/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:41:56 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/15 23:21:59 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

unsigned int	ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "fully truncated";
	char dest[] = "String was";
	printf("%i\n", ft_strlcat(dest,src, 28));
	printf("%s\n", dest);
}
*/
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	
	i = ft_strlen(dest);
	if (size <= i)
	{
		return (size + ft_strlen(src));
	}
	j = 0;
	while (src[j] && size > i + 1)
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
