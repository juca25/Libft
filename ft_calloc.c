/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:56:50 by juca              #+#    #+#             */
/*   Updated: 2024/01/29 12:06:10 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_ele, size_t ele_size)
{
	void	*arr;
	int		i;

	if (num_ele <= 0 || ele_size <= 0)
		return (NULL);
	arr = malloc(num_ele * ele_size);
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
