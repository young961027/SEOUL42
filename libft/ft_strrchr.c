/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:18:17 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/11 15:28:14 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *string, int c)
{
	char	*result;

	*result = 0;
	while (*string != '\0')
	{
		if (*string == c)
			*result = *string;
		else
			*string++;
	}
	return (result);
}
