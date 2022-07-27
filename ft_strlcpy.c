/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 23:55:03 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/13 23:59:37 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;

	slen = 0;
	while (src[slen] != '\0')
		slen++;
	if (size == 0)
		return (slen);
	i = 0;
	while (size-- > 1)
	{
		if (src[i] == '\0')
			break ;
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (src[i] != '\0')
		return (slen);
	return (i);
}
