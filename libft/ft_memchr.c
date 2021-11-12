/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:35:45 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/12 17:20:25 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*ch;
	size_t			i;

	ch = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*ch == (unsigned char)c)
			return (ch);
		else
			ch++;
	}
	return (0);
}
