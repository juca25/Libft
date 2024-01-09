/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:21:30 by juca              #+#    #+#             */
/*   Updated: 2024/01/09 12:29:50 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *aux1 = s1;
	const unsigned char *aux2 = s2;
	unsigned int	i;
	
	i = 0;
	while(n-- > 0)
	{
		if(aux1[i] != aux2[i])
			return aux1[i] - aux2[i];
		i++;
	}
	return (aux1[i] - aux2[i]);
}