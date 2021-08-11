/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:18:49 by lbatista          #+#    #+#             */
/*   Updated: 2021/08/11 19:15:02 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clean;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		clean = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = clean;
	}
	*lst = NULL;
}
