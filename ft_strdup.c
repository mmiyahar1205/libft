/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:00:14 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 14:25:19 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*rtn;

	len = ft_strlen(s1);
	rtn = malloc(sizeof(char) * (len + 1));
	if (rtn == NULL)
		return (0);
	ft_strlcpy(rtn, s1, len + 1);
	return (rtn);
}
