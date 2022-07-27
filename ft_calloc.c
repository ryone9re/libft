/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 03:01:43 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/24 14:40:35 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sizemax(void)
{
	size_t	i;
	size_t	c;

	i = 1;
	c = sizeof(size_t) * 8 - 1;
	while (c--)
	{
		i = i << 1;
		i = i + 1;
	}
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t			size_max;
	unsigned char	*p;
	size_t			i;

	size_max = ft_sizemax();
	if (count && size && size > size_max / count)
	{
		errno = ENOMEM;
		return (NULL);
	}
	p = (unsigned char *)malloc(size * count);
	if (p)
	{
		i = 0;
		while (i < count * size)
			*(p + i++) = '\0';
	}
	return ((void *)p);
}
