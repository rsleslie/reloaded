/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:33:09 by coder             #+#    #+#             */
/*   Updated: 2022/08/31 00:18:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	diff;
	int	i;

	if (max < min || max == min)
		return (NULL);
	diff = max - min;
	ptr = malloc(diff * sizeof(int));
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	ptr[i + 1] = '\0';
	return (ptr);
}
