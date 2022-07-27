/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:18:14 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/25 06:44:08 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	l;
	t_list	*q;

	if (lst == NULL || f == NULL)
		return (NULL);
	l.next = NULL;
	while (lst)
	{
		q = ft_lstnew(f(lst->content));
		if (q == NULL)
		{
			ft_lstclear(&(l.next), del);
			return (NULL);
		}
		ft_lstadd_back(&(l.next), q);
		lst = lst->next;
	}
	return (l.next);
}
