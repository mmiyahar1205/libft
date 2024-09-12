/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:59:26 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 16:26:45 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_len(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

char	**free_split(char **ret, size_t i)
{
	while (i > 0)
		free(ret[--i]);
	free(ret);
	return (NULL);
}

size_t	get_len(const char **s, char c)
{
	size_t	ret;

	ret = 0;
	while (**s && **s != c && ++ret)
		++(*s);
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_len(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = get_len(&s, c);
			ret[i] = ft_substr(s - len, 0, len);
			if (!ret[i])
				return (free_split(ret, i));
			i++;
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}
