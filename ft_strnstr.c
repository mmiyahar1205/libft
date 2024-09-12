/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:02:43 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 14:22:16 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	haystack_len;
	size_t	count;

	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if (needle_len == 0)
		return ((char *)haystack);
	if (needle_len > len || needle_len > haystack_len)
		return (NULL);
	count = 0;
	while (count <= len - needle_len && haystack[count] != '\0')
	{
		if (ft_strncmp(&haystack[count], needle, needle_len) == 0)
			return ((char *)&haystack[count]);
		count++;
	}
	return (NULL);
}
