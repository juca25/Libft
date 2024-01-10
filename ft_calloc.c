/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:56:50 by juca              #+#    #+#             */
/*   Updated: 2024/01/10 12:21:50 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t num_ele, size_t ele_size)
{
	void	*arr;

	if(num_ele <= 0 || ele_size <= 0)
		return (NULL);
	arr = malloc(num_ele * ele_size);
	if (arr != NULL)
	{
		int	i;

		i = 0;
		while(i < num_ele * ele_size)
		{
			((char *) arr)[i] = 0;
			i++;
		}
	}
	return (arr);
}