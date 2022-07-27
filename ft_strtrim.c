/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 23:34:28 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/24 15:24:17 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	p = (char *)s1;
	while (*s1 != '\0')
		s1++;
	while (ft_strchr(set, *--s1) && s1 != p)
		;
	p = ft_substr(p, 0, ++s1 - p);
	return (p);
}
