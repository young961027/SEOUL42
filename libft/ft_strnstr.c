/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:38:40 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/23 17:30:00 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_is_n(const char *hay, const char *needle, size_t limit, size_t n)
{
	while (n < ft_strlen(needle) && limit > 0)
	{
		limit--;
		if (hay[n] == needle[n])
			n++;
		else
			break ;
	}
	return (n);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len)
	{
		n = 1;
		if (haystack[i] == '\0')
			return (0);
		if (haystack[i] == needle[0])
		{
			n = ft_is_n((const char *)&haystack[i], needle, len - i - n, n);
			if (n == ft_strlen(needle))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
