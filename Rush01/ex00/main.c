/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:35:25 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/15 18:35:36 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "rush.h"

int	main(int argc, char **argv)
{
	int	**matrix;
	int	*input;

	if (argc != 2 || !is_valid_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	input = parse_input(argv[1]);
	matrix = allocate_matrix();
	if (!matrix || !input)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (solve(matrix, input, 0, 0))
	{
		print_matrix(matrix);
	}
	else
		write(1, "Error\n", 6);
	free(input);
	free_matrix(matrix);
	return (0);
}
