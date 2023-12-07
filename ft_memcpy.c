/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:16:59 by juca              #+#    #+#             */
/*   Updated: 2023/12/07 15:44:33 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	const unsigned char *aux_src = src;
	unsigned char *aux_dest = dest;
	size_t	i;
	
	i = 0;
	if(num == 0 || dest == src)
		return (dest);
	while (i < num)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dest);
}