/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 14:26:40 by lzaccome          #+#    #+#             */
/*   Updated: 2019/11/27 15:10:49 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped;
	t_list	*f_mapped;

	if (!lst)
		return (NULL);
	if (!(mapped = malloc(sizeof(lst))))
		return (NULL);
	f_mapped = mapped;
	while (lst)
	{
		mapped->content = f(lst->content);
		if (!(mapped->next = malloc(sizeof(lst))))
		{
			ft_lstclear(&f_mapped, del);
			return (NULL);
		}
		mapped = mapped->next;
		lst = lst->next;
	}
	return (f_mapped);
}
