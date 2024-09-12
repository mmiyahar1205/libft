/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:57:52 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 14:35:54 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			count;

	p = (unsigned char *)b;
	count = 0;
	while (count < len)
	{
		p[count] = (unsigned char)c;
		count++;
	}
	return (b);
}
