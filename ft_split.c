/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:13:11 by juan-ser          #+#    #+#             */
/*   Updated: 2024/02/20 13:13:20 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fill(char **arr, char const *s, char c)
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

static size_t	count_size(char const *s, char c)
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

static void	free_split(char **arr)
{
	int	i;

	i = 0;
	if (arr == NULL)
		return ;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**arr;

	if (NULL == s)
		return (NULL);
	size = count_size(s, c);
	arr = (char **)malloc((size + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[size] = NULL;
	if (fill(arr, s, c))
	{
		free_split(arr);
		return (NULL);
	}
	return (arr);
}
