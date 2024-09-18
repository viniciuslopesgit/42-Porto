/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoaguia <leoaguia@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:45:57 by leoaguia          #+#    #+#             */
/*   Updated: 2024/09/15 19:59:51 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	count_visible_line(int *line, int size)
{
	int	visible;
	int	max;
	int	i;

	visible = 0;
	max = 0;
	i = 0;
	while (i < size)
	{
		if (line[i] > max)
		{
			max = line[i];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	count_visible_reverse(int *line, int size)
{
	int	visible;
	int	max;
	int	i;

	visible = 0;
	max = 0;
	i = size - 1;
	while (i >= 0)
	{
		if (line[i] > max)
		{
			max = line[i];
			visible++;
		}
		i--;
	}
	return (visible);
}

int	is_safe(int **matrix, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (matrix[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < SIZE)
	{
		if (matrix[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int **matrix, int *input, int row, int col)
{
	int	num;

	if (row == SIZE)
	{
		if (is_valid(matrix, input))
			return (1);
		return (0);
	}
	if (col == SIZE)
		return (solve(matrix, input, row + 1, 0));
	num = 1;
	while (num <= SIZE)
	{
		if (is_safe(matrix, row, col, num))
		{
			matrix[row][col] = num;
			if (solve(matrix, input, row, col + 1))
				return (1);
		}
		num++;
	}
	matrix[row][col] = 0;
	return (0);
}
