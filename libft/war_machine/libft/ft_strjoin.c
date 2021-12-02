/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:46:47 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/29 16:16:21 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*s;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s = malloc(len);
	if (!s)
		return (0);
	i = 0;
	while (i < ft_strlen(s1))
	{
		s[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= ft_strlen(s2))
	{
		s[i + ft_strlen(s1)] = s2[i];
		i++;
	}
	return (s);
}
