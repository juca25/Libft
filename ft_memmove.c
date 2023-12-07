/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:54:56 by juca              #+#    #+#             */
/*   Updated: 2023/12/07 16:21:53 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    const unsigned char *aux_src = src;
    unsigned char *aux_dest = dest; 
    if (aux_dest < aux_src)
    {
        while ( n > 0)
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