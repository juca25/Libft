/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:31:20 by juca              #+#    #+#             */
/*   Updated: 2024/01/23 13:36:09 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return ((char *)s1);
	i = 0;
	while (i < len && i < s1_len - s2_len + 1)
	{
		j = 0;
		while (j < s2_len && s1[i + j] == s2[j])
			j++;
		if (j == s2_len)
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
