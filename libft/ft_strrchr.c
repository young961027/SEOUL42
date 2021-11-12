/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:18:17 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/12 16:49:31 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			result = (char *)s + i;
		else
			i++;
	}
	return (result);
}
