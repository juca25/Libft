/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:13:11 by juan-ser          #+#    #+#             */
/*   Updated: 2024/01/31 11:36:29 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	fill(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			k = 0;
			while (s[i + k] && s[i + k] != c)
				k++;
			arr[j] = ft_substr(s, i, k);
			if (NULL == arr[j])
				return (1);
			j++;
			i += k;
		}
		else
			i++;
	}
	return (0);
}
size_t count_size(char const *s, char c)
{
	size_t	size;
	size_t	i;

	size = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			size++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (size);
}
char	**ft_split(char const *s, char c)
{
	size_t	size;
	char 	**arr;

	if (NULL == s)
		return (NULL);
	size = 0;
	size = count_size(s, c);
	arr = malloc((size + 1) * sizeof(char *));
	if (NULL == arr)
		return (NULL);
	arr[size] = 0;
	if (fill(arr, s, c))
		return (NULL);
	return (arr);
}
