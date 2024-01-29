/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:54:56 by juca              #+#    #+#             */
/*   Updated: 2024/01/29 12:05:39 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*aux_src;
	unsigned char	*aux_dest;

	aux_src = (unsigned char *)src;
	aux_dest = (unsigned char *)dest;
	if (aux_dest < aux_src)
	{
		while (n > 0)
		{
			*aux_dest++ = *aux_src++;
			n--;
		}
	}
	else
	{
		aux_dest += n - 1;
		aux_src += n - 1;
		while (n > 0)
		{
			*aux_dest-- = *aux_src--;
			n--;
		}
	}
	return (dest);
}
