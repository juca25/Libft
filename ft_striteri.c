/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:19:00 by juca              #+#    #+#             */
/*   Updated: 2024/01/29 12:24:45 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	if(!s)
		return ;
	while (s[len])
		len++;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}