/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:31:30 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/23 15:29:40 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;
	int		flag;

	dstlen = ft_strlen(dst);
	flag = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while ((int)i < (int)(dstsize - dstlen - 1) || (int)dstsize < 0)
	{
		if (src[i] == '\0')
			break ;
		else if (flag == 0)
			flag = 1;
		dst[dstlen + i] = src[i];
		i++;
	}
	if (flag == 1)
		dst[dstlen + i] = '\0';
	if (dstsize >= dstlen)
		return (dstlen + ft_strlen(src));
	else
		return (dstsize + ft_strlen(src));
}
