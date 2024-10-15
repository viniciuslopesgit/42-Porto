/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoaguia <leoaguia@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:28:49 by leoaguia          #+#    #+#             */
/*   Updated: 2024/09/15 18:28:54 by leoaguia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "rush.h"

int	**allocate_matrix(void)
{
	int	**matrix;
	int	i;

	matrix = (int **)malloc(4 * sizeof(int *));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < 4)
	{
		matrix[i] = (int *)malloc(4 * sizeof(int));
		if (!matrix[i])
			return (NULL);
		i++;
	}
	return (matrix);
}

void	free_matrix(int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

void	print_matrix(int **matrix)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			c = matrix[i][j] + '0';
			write(1, &c, 1);
			if (j < SIZE - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
