/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:02:19 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/12 15:57:33 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(char *string, int c)
{
	while (*string != '\0')
	{
		if (*string == c)
			return (*string);
		else
			*string++;
	}
	return ("\0");
}
