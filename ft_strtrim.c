/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:38:38 by juca              #+#    #+#             */
/*   Updated: 2024/01/29 12:05:17 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	trim_len;
	char	*trim;

	i = 0;
	j = ft_strlen(s1);
	while (i < j && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]) != NULL)
		j--;
	trim_len = j - i;
	trim = (char *)malloc(trim_len + 1);
	if (trim == NULL)
		return (NULL);
	ft_strlcpy(trim, s1 + i, trim_len);
	trim[trim_len] = 0;
	return (trim);
}
