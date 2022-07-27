/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:18:53 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/24 22:44:00 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (s == NULL)
		return (NULL);
	p = ft_strchr(s, '\0');
	if (!(p && p - s > start))
		len = 0;
	if (len > (size_t)(p - &s[start]))
		len = (p - &s[start]);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p)
	{
		i = 0;
		while (i < len && s[start + i] != '\0')
		{
			p[i] = s[start + i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
