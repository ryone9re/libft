/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:03:30 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/25 05:13:57 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		lst = NULL;
		return ;
	}
	next = (*lst)->next;
	while (*lst)
	{
		ft_lstdelone(*lst, del);
		*lst = next;
		if (*lst == NULL)
			break ;
		next = (*lst)->next;
	}
}
