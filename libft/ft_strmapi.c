/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:39:28 by yohwang           #+#    #+#             */
/*   Updated: 2021/12/02 16:49:07 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	char			c;
	unsigned int	len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (0);
	i = 0;
	while (i < len)
	{
		c = s[i];
		result[i] = f(i, c);
		i++;
	}
	result[i] = '\0';
	return (result);
}
