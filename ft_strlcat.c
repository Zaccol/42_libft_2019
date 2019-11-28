/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:50:18 by lzaccome          #+#    #+#             */
/*   Updated: 2019/11/25 18:54:32 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst,
const char *restrict src, size_t dstsize)
{
	unsigned int i;
	unsigned int destlen;
	unsigned int srclen;

	i = 0;
	destlen = 0;
	srclen = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize > destlen)
	{
		while (i < dstsize - destlen - 1 && src[i] != '\0')
		{
			dst[destlen + i] = src[i];
			i++;
		}
		dst[destlen + i] = '\0';
		return (destlen + srclen);
	}
	return (srclen + dstsize);
}
