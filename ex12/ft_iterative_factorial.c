/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:07:24 by coder             #+#    #+#             */
/*   Updated: 2022/09/03 22:15:09 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	counter;

	if (nb >= 0 && nb < 13)
	{
		if (nb == 1 || nb == 0)
			return (1);
		else
			counter = nb;
		nb = nb - 1;
		while (nb != 0)
		{
			factorial = counter * nb;
			counter = factorial;
			nb--;
		}
		return (factorial);
	}
	return (0);
}	
