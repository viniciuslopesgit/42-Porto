/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:05:54 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/12 20:23:14 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("FT_STRCMP:	%i\n", ft_strcmp("hcllo", "hello"));
	printf("STRCMP:		%i\n", strcmp("hcllo", "hello"));
	return (0);
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
