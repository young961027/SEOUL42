/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:58:13 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/24 15:01:26 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		len;
	int		i;

	len = ft_strlen(s1);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == 0)
		return (0);
	else
	{
		i = 0;
		while (s1[i] != '\0')
		{
			copy[i] = s1[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}
