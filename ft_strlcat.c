/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:22:09 by juca              #+#    #+#             */
/*   Updated: 2024/01/16 14:20:57 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	copy_len;
	size_t	src_cpy_len;
	char	*src_aux;
	char	*dest_aux;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size == 0)
		return (src_len);
	if (dest_len == size)
		return (size + src_len);
	copy_len = size - dest_len - 1;
	src_cpy_len = src_len < copy_len ? src_len :copy_len;
	*dest_aux = dest + dest_len;
	*src_aux = src;
	i = 0;
	while (i < src_cpy_len)
	{
		*dest_aux++ = *src_aux++;
		i++;
	}
	*dest_aux = 0;
	return (dest_len + src_cpy_len);
}
