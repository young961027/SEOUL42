/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:16:00 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/12 16:27:50 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	unsigned char	*n;
	size_t			i;

	n = b;
	i = 0;
	while (i < len)
	{
		*n = c;
		n++;
		i++;
	}
	return (b);
}
