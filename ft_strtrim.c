/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:39:33 by lzaccome          #+#    #+#             */
/*   Updated: 2019/11/27 18:44:28 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			is_in_charset(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static unsigned int	end_checker(char const *s1, char const *set)
{
	unsigned int	len;

	len = ft_strlen(s1);
	while (is_in_charset(set, s1[len - 1]))
		len--;
	return (len);
}

static char			*fill_trim(char const *s1, char const *set, unsigned int i)
{
	unsigned int	len;
	unsigned int	j;
	char			*trim;

	len = end_checker(s1, set);
	if (!(trim = malloc(sizeof(char) * ((len - i) + 1))))
		return (NULL);
	j = 0;
	while (i < len)
		trim[j++] = s1[i++];
	trim[j] = '\0';
	return (trim);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;

	i = 0;
	if (!s1)
		return (ft_strdup(""));
	else if (!set)
		return (ft_strdup(s1));
	else
	{
		while (is_in_charset(set, s1[i]))
			i++;
		if (!s1[i])
			return (ft_strdup(""));
	}
	return (fill_trim(s1, set, i));
}
