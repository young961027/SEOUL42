/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:43:56 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/27 14:29:36 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	int				len1;
	int				len2;
	size_t			i;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	len1 = 0;
	len2 = 0;
	i = 0;
	while (i < n)
	{
		len1 += c1[i];
		len2 += c2[i];
		if (c1[i] == '\0' || c2[i] == '\0')
			break ;
		i++;
	}
	return (len1 - len2);
}
