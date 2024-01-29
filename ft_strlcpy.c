/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:26:02 by juca              #+#    #+#             */
/*   Updated: 2024/01/29 12:04:46 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != 0)
	{
		i++;
		if (i == size)
			break ;
	}
	if (i < size)
		ft_memcpy(dest, src, i + 1);
	else
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = 0;
	}
	return (i);
}
