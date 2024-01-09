/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:08:52 by juca              #+#    #+#             */
/*   Updated: 2024/01/09 12:19:13 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *aux = s;
	size_t	i;

	i = 0;
	while(n--)
	{
		if(aux[i] == c)
			return (void *)(aux + i);
		i++;
	}
	return (NULL);
}