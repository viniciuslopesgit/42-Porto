/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:03:59 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/11 18:35:05 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	destino[20];
//	char	codigo[20] = "Hello World";
	
	ft_strcpy(destino, "Hello World! Piscine 42.");
	printf("Resposta:	%s",destino );
	return 0;
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
