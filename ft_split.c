/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurimot <rkurimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:56:45 by rkurimot          #+#    #+#             */
/*   Updated: 2022/07/27 18:21:09 by rkurimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_isexist(const char *str, char c)
{
	size_t	cur;
	size_t	len;

	cur = 0;
	len = 0;
	while (str[cur] == c && str[cur] != '\0')
		cur++;
	while (str[cur + len] != c && str[cur + len] != '\0')
		len++;
	if (len == 0)
		return (len);
	return (cur + len);
}

static char	**ft_split_free(char **a)
{
	size_t	len;

	if (a)
	{
		len = 0;
		while (a[len] != NULL)
			free(a[len++]);
		free(a);
	}
	return (NULL);
}

static char	**ft_split_realloc(char **arr, size_t len, size_t siz)
{
	char	**p;
	size_t	i;

	p = (char **)ft_calloc(len, siz);
	if (p == NULL)
	{
		ft_split_free(arr);
		return (NULL);
	}
	i = 0;
	while (arr[i] != NULL)
	{
		p[i] = arr[i];
		i++;
	}
	free(arr);
	return (p);
}

static char	**ft_add_back(char **arr, size_t len, const char *str, char c)
{
	size_t	start;
	size_t	end;
	char	*p;
	size_t	i;

	start = 0;
	while (str[start] == c && str[start] != '\0')
		start++;
	end = start;
	while (str[end] != c && str[end] != '\0')
		end++;
	p = (char *)ft_calloc(end - start + 1, sizeof(char));
	if (p == NULL)
	{
		ft_split_free(arr);
		return (NULL);
	}
	i = 0;
	while (start < end)
		p[i++] = str[start++];
	arr[len - 2] = p;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	void	*p;
	size_t	len;
	size_t	cur;

	if (s == NULL)
		return (NULL);
	len = 0;
	res = (char **)ft_calloc(++len, sizeof(char *));
	if (res)
	{
		cur = 0;
		while (s[cur] != '\0' && ft_isexist(&(s[cur]), c))
		{
			p = ft_split_realloc(res, ++len, sizeof(char *));
			if (p == NULL)
				return (NULL);
			res = p;
			res = ft_add_back(res, len, &(s[cur]), c);
			if (res == NULL)
				return (NULL);
			cur += ft_isexist(&(s[cur]), c);
		}
	}
	return (res);
}
