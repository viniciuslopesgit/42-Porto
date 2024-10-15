/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:29:21 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/16 18:41:15 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

#include <stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	printf("Result:		%i\n",ft_strlen("Hello"));
	return (0);
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
