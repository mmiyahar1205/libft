/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:00:53 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 14:24:44 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*rtn;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	rtn = malloc(sizeof(char) * (len + 1));
	if (rtn == NULL)
		return (0);
	ft_strlcpy(rtn, s1, len + 1);
	ft_strlcat(rtn, s2, len + 1);
	return (rtn);
}
