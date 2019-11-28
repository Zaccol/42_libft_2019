/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 19:51:08 by lzaccome          #+#    #+#             */
/*   Updated: 2019/11/26 19:59:44 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*now;
	t_list	*after;

	if (*lst && del)
	{
		now = *lst;
		while (now)
		{
			after = now->next;
			ft_lstdelone(now, (*del));
			now = after;
		}
		*lst = NULL;
	}
}
