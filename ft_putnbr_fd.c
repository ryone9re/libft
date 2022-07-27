/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:20:45 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/24 20:48:15 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		j;
	char	s[sizeof(int) * 8];
	char	t[sizeof(int) * 8];

	i = 0;
	j = 0;
	if (n < 0)
		s[i++] = '-';
	else
		n *= -1;
	t[j++] = -(n % 10) + '0';
	n /= 10;
	while (n)
	{
		t[j++] = -(n % 10) + '0';
		n /= 10;
	}
	while (j)
		s[i++] = t[--j];
	write(fd, s, i);
}
