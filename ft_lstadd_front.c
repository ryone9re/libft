/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 04:43:04 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/25 04:49:23 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *n)
{
	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = n;
		return ;
	}
	n->next = *lst;
	*lst = n;
}
