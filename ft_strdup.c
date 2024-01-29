/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:56:28 by juca              #+#    #+#             */
/*   Updated: 2024/01/29 12:03:30 by juca             ###   ########.fr       */
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
