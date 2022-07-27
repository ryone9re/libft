/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:07:38 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/27 00:38:45 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	char	*p;
	char	*start;

	cc = (char)c;
	p = (char *)s;
	start = (char *)s;
	while (*p != '\0')
		p++;
	while (p != start)
	{
		if (*p == cc)
			return (p);
		p--;
	}
	if (*p == cc)
		return (p);
	return (NULL);
}
