/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:31:20 by juca              #+#    #+#             */
/*   Updated: 2024/01/30 21:03:43 by juan-ser         ###   ########.fr       */
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
	if (s2_len == 0 || s2 == s1)
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < len && !(s1_len < s2_len || len < s2_len))
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && s1[i + j] && (i + j) < len)
			{
				j++;
				if (s2[j] == '\0')
					return ((char *)(s1 + i));
			}
		}
		i++;
	}
	return (NULL);
}
