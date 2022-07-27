/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:57:10 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/24 16:38:39 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	size_t	dig;
	size_t	isneg;
	int		nn;
	char	*p;

	dig = 1;
	isneg = n < 0;
	nn = n / 10;
	while (nn)
	{
		nn /= 10;
		dig++;
	}
	p = (char *)ft_calloc(dig + isneg + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	while (dig--)
	{
		p[dig + isneg] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	if (isneg)
		p[0] = '-';
	return (p);
}
