/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:33:42 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/23 21:57:38 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

int	main(int argc, char **argv)
{
	char	*str1[3] = {"Hello, ", "World", "!"};
	size_t	size1 = 3;
	printf("Test 1: ");
	printf("%s\n", ft_strjoin(size1, str1, "@"));

	char	*str2[2] = {"Single", "string"};
	size_t	size2 = 2;
	printf("Test 2: ");
	printf("%s\n", ft_strjoin(size2, str2, "-"));

	char	*str3[1] = {" Lone string "};
	size_t	size3 = 1;
	printf("Test 3: ");
	printf("%s\n", ft_strjoin(size3, str3, "+"));

	char	*str4[4] = {"This", "is", "a", "test"};
	size_t	size4 = 4;
	printf("Test 4: ");
	printf("%s\n", ft_strjoin(size4, str4, "_"));

	char	*str5[0] = {};
	size_t	size5 = 0;
	printf("Test 5: ");
	printf("%s\n", ft_strjoin(size5, str5, "="));

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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;
	int		i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len = total_len + ft_strlen(strs[i]);
		i++;
	}
	total_len = total_len + (size - 1) * ft_strlen(sep);
	result = malloc(total_len + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		ft_strcat(result, sep);
		i++;
	}
	result[total_len] = '\0';
	return (result);
}
