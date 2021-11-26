/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:42:24 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/26 21:28:12 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_char(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	*fill_word(char const *s, size_t i, size_t j, char *word)
{
	size_t	idx;
	size_t	len;

	idx = 0;
	len = i - j;
	while (idx < len)
	{
		word[idx] = s[idx + j];
		idx++;
	}
	word[idx] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*word;
	size_t	count;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	count = 0;
	tab = malloc(sizeof(char *) * (count_char(s, c) + 2));
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		if ((int)(i - j) > 0)
		{
			word = malloc(i - j + 1);
			word = fill_word(s, i, j, word);
			tab[count] = word;
			count++;
		}
		j = ++i;
	}
	tab[count] = 0;
	return (tab);
}
