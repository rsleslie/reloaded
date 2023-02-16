/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:29:28 by coder             #+#    #+#             */
/*   Updated: 2022/08/26 19:13:53 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb < 13)
	{
		if (nb == 1 || nb == 0)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
