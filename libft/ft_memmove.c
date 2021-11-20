/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:48:08 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/20 16:48:11 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			cdst[i - 1] = csrc[i - 1];
			i--;
		}
		return ((void *)cdst);
	}
	i = 0;
	while (i < len)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return ((void *)cdst);
}
