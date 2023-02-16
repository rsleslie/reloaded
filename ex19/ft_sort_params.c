/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:40:40 by coder             #+#    #+#             */
/*   Updated: 2022/08/30 06:09:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_swap(char **a, char **b);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	x;
	int	i;

	i = 1;
	while (i < argc)
	{
		x = 0;
		while (x < argc)
		{
			if (ft_strcmp(argv[x], argv[i]) > 0)
				ft_swap(&argv[x], &argv[i]);
			x++;
		}
		i++;
	}
	i = 1;
	while (argv[i])
	{
		x = 0;
		while (argv[i][x] != '\0')
			ft_putchar(argv[i][x++]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}
