/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:55:42 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 14:36:29 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				count;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	count = 0;
	while (count < n)
	{
		if (p1[count] != p2[count])
			return ((int)(p1[count] - p2[count]));
		count++;
	}
	return (0);
}
