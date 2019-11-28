/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:58:25 by lzaccome          #+#    #+#             */
/*   Updated: 2019/11/25 19:06:38 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned int		i;
	unsigned char		*result;

	i = 0;
	result = (unsigned char *)pointer;
	while (i < count)
	{
		result[i] = (unsigned char)value;
		i++;
	}
	pointer = (void *)result;
	return (pointer);
}
