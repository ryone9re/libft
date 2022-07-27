/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:27:14 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/14 00:02:51 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dp;
	unsigned char	*sp;

	if (dest == NULL && src == NULL)
		return (NULL);
	dp = (unsigned char *)dest;
	sp = (unsigned char *)src;
	if (sp + n < dp || sp > dp)
	{
		while (n--)
			*dp++ = *sp++;
	}
	else
	{
		while (n)
		{
			dp[n - 1] = sp[n - 1];
			n--;
		}
	}
	return (dest);
}
