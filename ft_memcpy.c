/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:16:59 by juca              #+#    #+#             */
/*   Updated: 2024/01/29 12:05:43 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*aux_src;
	unsigned char	*aux_dest;
	size_t			i;

	aux_src = (unsigned char *)src;
	aux_dest = (unsigned char *)dest;
	i = 0;
	if (num == 0 || dest == src)
		return (dest);
	while (i < num)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dest);
}
