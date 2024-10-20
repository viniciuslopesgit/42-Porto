/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:46:29 by vilopes           #+#    #+#             */
/*   Updated: 2024/10/20 00:54:44 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char	*copy;

	if (argc < 2)
	{
		return (1);
	}
	else
	{
		copy = ft_strdup(argv[1]);
		if (copy != NULL)
		{
			printf("Original: %s\n", argv[1]);
			printf("Copy: %s\n", copy);
		}
		else
		{
			printf("Error.. copy string");
		}
		free(copy);
	}
	return (0);
}
*/
char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*mem;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	len = len + 1;
	mem = (char *)malloc(len * sizeof(char));
	if (mem == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		mem[i] = src[i];
		i++;
	}
	return (mem);
}
