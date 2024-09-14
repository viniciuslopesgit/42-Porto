/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:24:36 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/12 20:45:35 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("Result:		%i\n", ft_strncmp("hello", "hellq", 3));
	printf("Result:         %i\n", ft_strncmp("hello", "hellq", 4));
	return (0);
}
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != s2[i] && i < n)
		return (s1[i] - s2[i]);
	i++;
	return (0);
}
