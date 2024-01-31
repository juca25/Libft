/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:37:03 by juan-ser          #+#    #+#             */
/*   Updated: 2024/01/31 12:41:19 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst,del);
		*lst = tmp;
	}
}

// int main(void)
// {
// 	t_list *list = NULL;
	
// 	ft_lstclear(&list, free);

// 	if (list == NULL)
// 		printf("La lista ha sido liberada correctamente.\n");
// 	else
// 		printf("Error al liberar la lista.\n");

// 	return 0;
// }

