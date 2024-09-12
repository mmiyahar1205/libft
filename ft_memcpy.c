/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:55:47 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 14:35:21 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*sourc;
	size_t				count;

	if (dst == NULL && src == NULL && n > 0)
		return (NULL);
	dest = (unsigned char *)dst;
	sourc = (const unsigned char *)src;
	count = 0;
	while (count < n)
	{
		dest[count] = sourc[count];
		count++;
	}
	return (dst);
}
