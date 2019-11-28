/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:02:11 by lzaccome          #+#    #+#             */
/*   Updated: 2019/11/25 19:06:17 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	def_full_len(long nb)
{
	unsigned int	len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	unsigned int	fulllen;
	long			nb;
	char			*res;

	nb = n;
	fulllen = def_full_len(nb);
	if (!(res = malloc(sizeof(char) * (fulllen + 1))))
		return (NULL);
	res[fulllen--] = '\0';
	if (nb == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nb < 0)
	{
		nb = -nb;
		res[0] = '-';
	}
	while (nb > 0)
	{
		res[fulllen--] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (res);
}
