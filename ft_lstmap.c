/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:09:39 by lbatista          #+#    #+#             */
/*   Updated: 2021/08/11 19:24:11 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*list;

	if (!lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		list = ft_lstnew(f(lst->content));
		if (!list)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new, list);
		lst = lst->next;
	}
	return (new);
}
