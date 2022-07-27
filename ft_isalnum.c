/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:00:38 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/09 11:59:50 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned int	isnum;
	unsigned int	isupp;
	unsigned int	islow;

	isnum = ('0' <= c && c <= '9');
	isupp = ('A' <= c && c <= 'Z');
	islow = ('a' <= c && c <= 'z');
	return (isnum || isupp || islow);
}
