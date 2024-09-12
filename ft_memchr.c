/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:55:38 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 14:34:52 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				count;

	str = (const unsigned char *)s;
	count = 0;
	while (count < n)
	{
		if (str[count] == (unsigned char)c)
			return ((void *)(str + count));
		count++;
	}
	return (NULL);
}
