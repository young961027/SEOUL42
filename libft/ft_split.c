/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:42:24 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/26 18:47:46 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_size(char const *s, char c)
{
	size_t	size;
	size_t	i;

	size = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	size_t	i;
	char	**result;
	char	*word;

	size = count_size(s, c);

