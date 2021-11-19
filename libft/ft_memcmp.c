/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:14:01 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/19 20:56:08 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*c1;
	char	*c2;
	int		len1;
	int		len2;
	size_t	i;

	c1 = (char *)s1;
	c2 = (char *)s2;
	len1 = 0;
	len2 = 0;
	i = 0;
	while (i < n)
	{
		len1 += (int)c1[i];
		len2 += (int)c2[i];
		i++;
	}
	return (len1 - len2);
}
/*
int main()
{
	char s[] = {-128, 0, 127, 0};
	char s1[] = {-128, 0, 127, 0};
	char s2[] = {0,0,127,0};
	char s3[] = {0,0,42,0};
	int r1 = ft_memcmp(s,s1,4);
	int r2 = ft_memcmp(s,s2,0);
	int r3 = ft_memcmp(s, s2, 1);
	int r4 = ft_memcmp(s2, s, 1);
	int r5 = ft_memcmp(s2, s3, 4);
	printf("\n %d %d %d %d %d \n", r1, r2, r3, r4, r5);
}*/
