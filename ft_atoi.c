/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:32:29 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/27 15:41:46 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_isspace(int c)
{
	if (c == ' ')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	return (0);
}

static long	ft_strtol_ten(const char *str)
{
	long	i;
	long	neg;

	while (ft_atoi_isspace(*str))
		str++;
	i = 0;
	neg = -1;
	if (*str == '-')
		neg = 0;
	if (*str == '+' || *str == '-')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		if (i < LONG_MIN / 10)
			return (neg);
		i = i * 10 - (*str - '0');
		str++;
	}
	if (!neg)
		return (i);
	return (-i);
}

int	ft_atoi(const char *str)
{
	return ((int)ft_strtol_ten(str));
}
