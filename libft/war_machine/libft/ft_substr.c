/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:36:21 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/29 16:09:45 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		sub = malloc(ft_strlen(s) + 1);
	else
		sub = malloc(len + 1);
	if (!sub)
		return (0);
	else if ((size_t)start > ft_strlen(s))
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
