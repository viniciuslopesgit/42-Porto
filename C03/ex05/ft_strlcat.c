/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:41:56 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/14 17:26:12 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int    ft_strlen(char *str);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest_ex[] = "Hello ";
	char	src_ex[] = "World";

	printf("StrCat: %i\n", ft_strlcat(dest_ex, src_ex, 16));
	printf("Phrase: %s\n", dest_ex);
	return (0);
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (1);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	dst_len = j;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dst_len)
		return (src_len + size);
	while (src[i] != '\0' && i < size - dst_len - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dst_len + src_len);
}
