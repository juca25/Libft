/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:11:56 by juca              #+#    #+#             */
/*   Updated: 2024/01/29 12:18:20 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	str = malloc((len + 1) * sizeof(char));
	if(!s || !str)
		return (NULL);
	while(s[len])
		len++;
	while(i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = 0;
	return (str);
}