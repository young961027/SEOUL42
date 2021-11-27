/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:36:21 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/27 21:08:39 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	int		i;
	char	*sub;

	slen = ft_strlen(s);
	if (len > slen)
		sub = malloc(slen + 1);
	else
		sub = malloc(len + 1);
	if (!sub)
		return (0);
	else if ((size_t)start > slen)
	{
		sub[0] = '\0';
		return (sub);
	}
	i = -1;
	while (++i < (int)len)
	{
		sub[i] = s[(int)(i + start)];
		if (s[(int)(i + start)] == '\0')
			return (sub);
	}
	sub[i] = '\0';
	return (sub);
}
