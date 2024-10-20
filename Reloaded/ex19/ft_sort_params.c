/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilopes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:12:50 by vilopes           #+#    #+#             */
/*   Updated: 2024/10/19 23:45:33 by vilopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_argv(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < (argc - 1))
	{
		if (ft_strcmp(argv[i + 1], argv[i]) < 0)
		{
			temp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = temp;
			i = i - 2;
		}
		i++;
	}
	ft_print_argv(argc, argv);
	return (0);
}

void	ft_print_argv(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
