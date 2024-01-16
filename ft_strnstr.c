/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:31:20 by juca              #+#    #+#             */
/*   Updated: 2024/01/16 14:25:01 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	s1_len = 0;
	s2_len = 0;
	while (s2[s2_len] != 0)
		s2_len++;
	while (s1[s1_len] != 0)
		s1_len++;
	i = 0;
	while (i < s1_len)
	{
		j = 0;
		while (j < s2_len)
		{
			if (s1[i + j] != s2[j])
				break ;
			if (j == s2_len - 1)
				return ((char *)(s1 + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
