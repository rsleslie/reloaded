/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:21:56 by coder             #+#    #+#             */
/*   Updated: 2022/08/26 17:29:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	coluna;
	int	arg;

	arg = 1;
	while (argv[arg] && argc)
	{
		coluna = 0;
		while (argv[arg][coluna] != '\0')
		{
			ft_putchar(argv[arg][coluna]);
			coluna++;
		}
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
