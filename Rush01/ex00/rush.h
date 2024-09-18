/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:36:07 by vilopes           #+#    #+#             */
/*   Updated: 2024/09/15 20:21:38 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RUSH_H
# define RUSH_H
# define SIZE 4

int		count_visible_line(int *line, int size);
int		count_visible_reverse(int *line, int size);
int		is_valid_input(char *str);
int		*parse_input(char *str);
int		**allocate_matrix(void);
int		is_valid(int **matrix, int *input);
int		is_safe(int **matrix, int row, int col, int num);
int		solve(int **matrix, int *input, int row, int col);
void	print_matrix(int **matrix);
void	free_matrix(int **matrix);

#endif
