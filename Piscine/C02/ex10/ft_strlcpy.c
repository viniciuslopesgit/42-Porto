/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:34:25 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/10 22:48:00 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int 	main(void)
{
	char	dest[6];
	char	src[] = "Hello, World!";
	
	ft_strlcpy(dest, src, 6);
	
	printf("%s\n", dest);
	return 0;
}
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	str_len;

	i = 0;
	str_len = 0;
	while (src[str_len] != '\0')
		str_len++;
	if (size != '\0')
	{
		while (i < (size -1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (str_len);
}
