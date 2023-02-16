/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:13:39 by coder             #+#    #+#             */
/*   Updated: 2022/09/03 21:07:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i])
		i++;
	ptr = (char *)malloc((i * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (src[i] != '\0')
		{
			ptr[i] = src[i];
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
