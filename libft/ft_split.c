/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:42:24 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/29 16:03:26 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_char(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (i != 0 && s[i - 1] != c)
				count++;
			else
				count++;
		}
		i++;
	}
	return (count);
}

static char	*fill_word(char const *s, size_t *idx, char **tab)
{
	char	*word;
	size_t	i;
	size_t	len;

	i = 0;
	len = idx[0] - idx[1];
	word = malloc(len + 1);
	if (!word)
	{
		while (i < idx[2])
			free(tab[i++]);
		free(tab);
		return (0);
	}
	while (i < len)
	{
		word[i] = s[i + idx[1]];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_zero(size_t *idx)
{
	size_t	i;

	i = 0;
	while (i < 3)
		idx[i++] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*word;
	size_t	idx[3];

	if (!s)
		return (0);
	ft_zero(idx);
	tab = malloc(sizeof(char *) * (count_char(s, c) + 1));
	if (!tab)
		return (0);
	while (s[idx[0]] != '\0')
	{
		while (s[idx[0]] != c && s[idx[0]] != '\0')
			idx[0]++;
		if ((int)(idx[0] - idx[1]) > 0)
		{
			word = fill_word(s, idx, tab);
			if (!word)
				return (0);
			tab[idx[2]++] = word;
		}
		idx[1] = ++idx[0];
	}
	tab[idx[2]] = 0;
	return (tab);
}
