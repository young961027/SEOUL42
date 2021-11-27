/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:26:44 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/27 14:32:58 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;

	if (dst == 0 && src == 0)
		return (0);
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	while (n--)
		*cdst++ = *csrc++;
	return (dst);
}
