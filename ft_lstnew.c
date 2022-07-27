/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 04:30:19 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/25 04:41:57 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	t;

	t.next = (t_list *)malloc(sizeof(t_list));
	if (t.next == NULL)
		return (NULL);
	t.next->content = content;
	t.next->next = NULL;
	return (t.next);
}
