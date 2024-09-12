/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:01:37 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 14:23:43 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size != 0)
	{
		while ((src[count] != '\0') && (count < size - 1))
		{
			dst[count] = src[count];
			count++;
		}
	}
	if (size > 0)
		dst[count] = '\0';
	while (src[count] != '\0')
		count++;
	return (count);
}
