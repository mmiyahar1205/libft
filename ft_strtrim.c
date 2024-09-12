/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:03:17 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 14:18:40 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	is_in_set(char c, const char *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *str, const char *set)
{
	const char	*start;
	const char	*end;
	char		*trimmed_str;
	size_t		trimmed_len;

	start = str;
	while (*start != '\0' && is_in_set(*start, set))
		start++;
	if (*start == '\0')
	{
		trimmed_str = malloc(1);
		if (trimmed_str)
			*trimmed_str = '\0';
		return (trimmed_str);
	}
	end = start + ft_strlen(start) - 1;
	while (end > start && is_in_set(*end, set))
		end--;
	trimmed_len = end - start + 1;
	trimmed_str = malloc(trimmed_len + 1);
	if (trimmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmed_str, start, trimmed_len + 1);
	trimmed_str[trimmed_len] = '\0';
	return (trimmed_str);
}
