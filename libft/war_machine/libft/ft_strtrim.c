/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:08:01 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/29 16:18:31 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_front(char const *s1, char const *set)
{
	size_t	i;
	size_t	front;

	i = 0;
	front = 0;
	while (ft_strchr(set, s1[i]) != 0)
	{
		if (s1[i] == '\0')
			break ;
		front++;
		i++;
	}
	return (front);
}

static size_t	count_back(char const *s1, char const *set)
{
	size_t	i;
	size_t	back;

	i = 0;
	back = 0;
	while (ft_strchr(set, s1[ft_strlen(s1) - i - 1]) != 0)
	{
		if (ft_strlen(s1) - i - 1 == 0)
			break ;
		back++;
		i++;
	}
	return (back);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	front;
	size_t	back;
	char	*s;

	if (!s1)
		return (0);
	front = count_front(s1, set);
	back = count_back(s1, set);
	if ((int)(ft_strlen(s1) - front - back + 1) < 0)
		s = malloc(1);
	else
		s = malloc(ft_strlen(s1) - front - back + 1);
	if (!s)
		return (0);
	i = 0;
	while ((int)i < (int)(ft_strlen(s1) - front - back))
	{
		s[i] = s1[i + front];
		i++;
	}
	s[i] = '\0';
	return (s);
}
