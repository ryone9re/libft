/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:12:48 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/14 01:55:13 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*dp;
	unsigned char	*sp;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	dp = (unsigned char *)dest;
	sp = (unsigned char *)src;
	while (i < n)
	{
		dp[i] = sp[i];
		i++;
	}
	return (dest);
}
