/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:47:38 by sacorder          #+#    #+#             */
/*   Updated: 2024/01/19 13:12:56 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*new_str(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n +1));
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
