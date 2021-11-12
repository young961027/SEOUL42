/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:34:32 by yohwang           #+#    #+#             */
/*   Updated: 2021/11/12 15:53:59 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		isalpha(int c);
int		toupper(int c);
int		isdigit(int c);
int		isalnum(int c);
int		tolower(int c);
int		isascii(int c);
int		isprint(int c);
int		strncmp(const char *s1, const char *s2, size_t n);

char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);

void	bzero(void *s, size_t n);
void	*memchr(const void *s, int c, size_t n);

#endif
