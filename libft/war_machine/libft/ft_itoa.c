/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:59:42 by yohwang           #+#    #+#             */
/*   Updated: 2021/12/02 16:33:09 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_len(int n)
{
	int	i;

	i = 1;
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*to_zero(char *result)
{
	if (!result)
		return (0);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

static char	*to_over(char *result, int n)
{
	int	i;

	i = 0;
	if (!result)
		return (0);
	if (n < 0)
		result[i++] = '-';
	result[i++] = '2';
	result[i++] = '1';
	result[i++] = '4';
	result[i++] = '7';
	result[i++] = '4';
	result[i++] = '8';
	result[i++] = '3';
	result[i++] = '6';
	result[i++] = '4';
	result[i] = i - 2 + '0';
	result[++i] = '\0';
	return (result);
}

static char	*to_int(int num, int count, int minus, char *result)
{
	int	i;

	if (!result)
		return (0);
	if (minus)
		result[0] = '-';
	i = count + minus;
	result[i] = '\0';
	while (minus < i)
	{
		result[--i] = num % 10 + '0';
		num = num / 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int	count;
	int	minus;

	minus = 0;
	if (n == 2147483647 || n == -2147483648)
	{
		if (n < 0)
			return (to_over(malloc(12), n));
		return (to_over(malloc(11), n));
	}
	else if (n == 0)
		return (to_zero(malloc(2)));
	else if (n <= 0)
	{
		minus = 1;
		n = -n;
	}
	count = calc_len(n);
	return (to_int(n, count, minus, malloc(count + minus + 1)));
}
