/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:22:09 by juca              #+#    #+#             */
/*   Updated: 2024/01/24 11:55:52 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= src_len)
		return (src_len + size);
	i = dest_len;
	while (*src != 0 && i < (size - 1))
		*(dest + i++) = *src++;
	*(dest + i) = 0;
	return (dest_len + src_len);
}
