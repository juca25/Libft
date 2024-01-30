/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:47:38 by juca          #+#    #+#             */
/*   Updated: 2024/01/29 12:04:17 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*new_str(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 2));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*result;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str = new_str(ft_strlen(s1) + ft_strlen(s2));
	if (!str)
		return (NULL);
	result = str;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = ' ';
	i++;
	while (s2[i - (ft_strlen(s1) + 1)])
	{
		str[i] = s2[i - (ft_strlen(s1) + 1)];
		i++;
	}
	str[i] = 0;
	return (result);
}
