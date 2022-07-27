/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:03:15 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/27 00:38:20 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	char	*sp;

	cc = (char)c;
	sp = (char *)s;
	while (*sp != '\0')
	{
		if (*sp == cc)
			return (sp);
		sp++;
	}
	if (*sp == cc)
		return (sp);
	return (NULL);
}
