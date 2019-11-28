/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:15:50 by lzaccome          #+#    #+#             */
/*   Updated: 2019/11/25 19:09:02 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
size_t dstsize)
{
	unsigned int i;
	unsigned int src_len;

	src_len = 0;
	if (!src)
		return (0);
	while (src[src_len] != 0)
	{
		src_len++;
	}
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] != 0 && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
