/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 04:56:17 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/25 04:59:27 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	t_list	*k;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = n;
		return ;
	}
	k = *lst;
	while (k->next != NULL)
		k = k->next;
	k->next = n;
}
