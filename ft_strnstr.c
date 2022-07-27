/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:37:12 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/19 04:41:58 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	while (n-- && s1[i])
	{
		if (s1[i] == *s2)
		{
			j = 0;
			while (s1[j + i] != '\0' && s2[j] != '\0')
			{
				if (j <= n && s1[j + i] == s2[j])
					j++;
				else
					break ;
			}
			if (s2[j] == '\0')
				return ((char *)(s1 + i));
		}
		i++;
	}
	return (NULL);
}
