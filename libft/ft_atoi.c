/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:03:16 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/27 20:10:32 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	is_overflow(long long result, long long minus, long long overflow)
{
	if (overflow > result)
	{
		if (minus == 1)
			return (-1);
		else
			return (0);
	}
	else
		return (1);
}

long long	is_minus(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	long long		result;
	long long		overflow;
	long long		minus;
	int				i;
	char			*s;

	result = 0;
	i = 0;
	minus = 1;
	s = (char *)str;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13) || s[i] == 0)
		i++;
	if (s[i] == '-' || s[i] == '+')
		minus = is_minus(s[i++]);
	while (ft_isdigit(s[i]) && s[i] != '\0')
	{
		overflow = result;
		result = result * 10;
		result = result + s[i++] - '0';
		if (is_overflow(result, minus, overflow) != 1)
			return (is_overflow(result, minus, overflow));
	}
	return (result * minus);
}
