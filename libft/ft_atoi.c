/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:03:16 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/23 20:34:21 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		result;
	int		minus;
	int		i;
	char	*s;

	result = 0;
	i = 0;
	minus = 1;
	s = (char *)str;
	while (s[i] == 32 || s[i] == 9 || s[i] == 10 || s[i] == 11 || s[i] == 12
		|| s[i] == 13 || s[i] == 0)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			minus = -minus;
		i++;
	}
	while (ft_isdigit(s[i]) && s[i] != 0)
	{
		result = result * 10;
		result = result + s[i] - '0';
		i++;
	}
	return (result * minus);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_atoi("a1"));
}*/
