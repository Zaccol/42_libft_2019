/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 19:31:38 by lzaccome          #+#    #+#             */
/*   Updated: 2019/11/27 15:22:55 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list		*begin;

	begin = (*alst);
	if (begin == NULL)
		(*alst) = new;
	else
	{
		while (begin->next)
			begin = begin->next;
		begin->next = new;
	}
}
