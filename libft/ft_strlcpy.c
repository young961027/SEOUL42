/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:40:24 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/20 17:53:24 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < dstsize)
	{
		dst[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

int main()
{
	char src[] = "coucou";
	char dest[10] = "AAAAAAAAAA";
	size_t i = ft_strlcpy(dest, src, 0);
}
