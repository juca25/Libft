/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:22:09 by juca              #+#    #+#             */
/*   Updated: 2023/12/07 21:31:44 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	const size_t src_len = ft_strlen(src);
	const size_t dest_len = ft_strlen(dest);

	if (size == 0)
		return (src_len);
	if (dest_len == size)
		return (size + src_len);

	const size_t copy_len = size - dest_len - 1;
	const size_t src_cpy_len = src_len < copy_len ? src_len :copy_len;

	char *dest_aux = dest + dest_len;
	const char *src_aux = src;
	size_t	i;

	i = 0;
	while (i < src_cpy_len)
	{
		*dest_aux++ = *src_aux++;
		i++;
	}
	*dest_aux = 0;
	return (dest_len + src_cpy_len);
}