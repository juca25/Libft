/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:49:26 by juca              #+#    #+#             */
/*   Updated: 2024/01/24 13:01:32 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != 0)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return ((char *)last);
}
