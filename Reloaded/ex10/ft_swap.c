/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:00:41 by vilopes           #+#    #+#             */
/*   Updated: 2024/10/17 20:09:50 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 2;
	num2 = 3;
	printf("Before: %i %i", num1, num2);
	ft_swap(&num1,&num2);
	printf("\nSwap: %i %i", num1, num2);
	
	return (0);
}
*/
void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
