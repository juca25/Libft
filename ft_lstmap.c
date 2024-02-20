/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:15:22 by juan-ser          #+#    #+#             */
/*   Updated: 2024/02/20 14:01:43 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new_lst;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		set = f(lst->content);
		aux = ft_lstnew(set);
		if (!aux)
		{
			del(set);
			ft_lstclear(&new_lst, del);
			return (new_lst);
		}
		ft_lstadd_back(&new_lst, aux);
		lst = lst->next;
	}
	return (new_lst);
}
