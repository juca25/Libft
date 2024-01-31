/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:16:37 by juan-ser          #+#    #+#             */
/*   Updated: 2024/01/31 12:35:01 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst ->next)
		lst = lst ->next;
	return (lst);
}

// int main()
// {
// 	t_list  *lst;
// 	t_list  *lst2;
// 	t_list  *lst3;

// 	lst = ft_lstnew("Hola");
// 	lst2 = ft_lstnew("Mundo");
// 	lst3 = ft_lstnew("Cruel");
// 	lst->next = lst2;
// 	lst2->next = lst3;
// 	printf("%s\n", (char *)ft_lstlast(lst)->content);
// }
