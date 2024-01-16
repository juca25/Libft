/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:49:26 by juca              #+#    #+#             */
/*   Updated: 2024/01/16 14:25:28 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char* last = NULL;
	int	i;
	
	i = 0;
	while(s[i] != 0)
	{
		if(s[i]  == c)
			last = &s[i];
		i++;
	}
	if(s[i] == c)
		last = &s[i];
	return (char *)last;
}