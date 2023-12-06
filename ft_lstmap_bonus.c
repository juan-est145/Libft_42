/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:58:11 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/06 13:45:51 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew_bonus(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear_bonus(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back_bonus(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
