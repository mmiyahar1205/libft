/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:01:13 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 14:24:26 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	int				count;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= destlen)
	{
		return (size + srclen);
	}
	count = 0;
	while (src[count] != '\0' && destlen + 1 + count < size)
	{
		dst[destlen + count] = src[count];
		count++;
	}
	dst[destlen + count] = '\0';
	return (destlen + srclen);
}
