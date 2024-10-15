/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:25:33 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/15 20:15:47 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "rush.h"

int	is_valid_input(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '1' && str[i] <= '4') || (str[i] == ' '))
		{
			if (str[i] >= '1' && str[i] <= '4')
				count++;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (count == 16);
}

int	*parse_input(char *str)
{
	int	*input;
	int	i;
	int	j;

	j = 0;
	i = 0;
	input = (int *)malloc(16 * sizeof(int));
	if (!input)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			input[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (input);
}

int	check_row_visibility(int *row, int *input, int i)
{
	if (input[i] != 0 && count_visible_line(row, SIZE) != input[i])
		return (0);
	if ((input[SIZE + i] != 0)
		&& (count_visible_reverse(row, SIZE) != input[SIZE + i]))
		return (0);
	return (1);
}

int	check_column_visibility(int **matrix, int *input, int j)
{
	int	k;
	int	column[SIZE];

	k = 0;
	while (k < SIZE)
	{
		column[k] = matrix[k][j];
		k++;
	}
	if ((input[2 * SIZE + j] != 0)
		&& (count_visible_line(column, SIZE) != input[2 * SIZE + j]))
		return (0);
	if ((input[3 * SIZE + j] != 0)
		&& (count_visible_reverse(column, SIZE) != input[3 * SIZE + j]))
		return (0);
	return (1);
}

int	is_valid(int **matrix, int *input)
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		if (!check_row_visibility(matrix[i], input, i))
			return (0);
		i++;
	}
	j = 0;
	while (j < SIZE)
	{
		if (!check_column_visibility(matrix, input, j))
			return (0);
		j++;
	}
	return (1);
}
