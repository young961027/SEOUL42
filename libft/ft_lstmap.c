/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohwang <yohwang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:25:53 by yohwang           #+#    #+#             */
/*   Updated: 2021/12/07 16:25:55 by yohwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = malloc(sizeof(t_list));
	if (!new || !lst || !f)
		return (0);
	tmp = new;
	while (lst->next)
	{
		new->content = f(lst->content);
		new->next = malloc(sizeof(t_list));
		if (!new->next)
		{
			ft_lstclear(&new, del);
			free(tmp);
			return (0);
		}
		new = new->next;
		lst = lst->next;
	}
	new->content = f(lst->content);
	new->next = 0;
	return (tmp);
}
