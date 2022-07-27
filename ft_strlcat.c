/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:05:40 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/19 02:52:19 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = 0;
	while (dst[dstlen] != '\0')
		dstlen++;
	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (size <= dstlen)
		return (srclen + size);
	i = 0;
	while (i < size - dstlen - 1 && i < srclen)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
