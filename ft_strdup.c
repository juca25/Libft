/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:27:36 by juca              #+#    #+#             */
/*   Updated: 2024/01/16 14:13:45 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*arr;
	size_t	len;

	len = ft_strlen(str) + 1;
	arr = malloc(len);
	if (arr == NULL)
		return (NULL);
	ft_memcpy(arr, str, len);
	return (arr);
}
