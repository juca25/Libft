/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:56:50 by juca              #+#    #+#             */
/*   Updated: 2024/01/24 13:08:30 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_ele, size_t ele_size)
{
	void			*arr;
	unsigned long	i;

	arr = malloc(num_ele * ele_size);
	if (!arr)
		return (NULL);
	if (arr != NULL)
	{
		i = 0;
		while (i < num_ele * ele_size)
		{
			((char *) arr)[i] = 0;
			i++;
		}
	}
	return (arr);
}
