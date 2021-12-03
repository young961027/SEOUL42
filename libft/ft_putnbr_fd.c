/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:39:27 by yohwang           #+#    #+#             */
/*   Updated: 2021/12/03 18:56:59 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	count_len(long long n)
{
	long long	len;

	len = 1;
	while (n / 10 > 0)
	{
		len++;
		n = n / 10;
	}
	return (len - 1);
}

long long	calc_len(long long len)
{
	long long	ten;

	ten = 1;
	while (len-- > 0)
		ten = ten * 10;
	return (ten);
}

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long long	num;
	long long	len;

	if (fd > 0)
	{
		if (n < 0)
		{
			c = '-';
			write(fd, &c, 1);
			num = -1LL * n;
		}
		else
			num = n;
		len = count_len(num);
		while (len > 0)
		{
			c = num / calc_len(len) + '0';
			write(fd, &c, 1);
			num = num % calc_len(len);
			len--;
		}
		c = num + '0';
		write(fd, &c, 1);
	}
}
