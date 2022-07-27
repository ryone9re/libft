/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 23:21:45 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/20 23:30:46 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	p = ft_strchr(s1, '\0');
	len = p - s1;
	p = ft_strchr(s2, '\0');
	len = len + (p - s2);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p)
	{
		len = 0;
		while (*s1 != '\0')
			p[len++] = *s1++;
		while (*s2 != '\0')
			p[len++] = *s2++;
		p[len] = '\0';
	}
	return (p);
}
