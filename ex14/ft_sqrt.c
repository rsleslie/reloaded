/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqtr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:30:54 by coder             #+#    #+#             */
/*   Updated: 2022/08/26 15:46:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	counter;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i != nb)
	{
		counter = i * i;
		if (counter == nb)
			return (i);
		i++;
	}
	return (0);
}
