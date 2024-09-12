/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiyahar <mmiyahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:53:53 by mmiyahar          #+#    #+#             */
/*   Updated: 2024/09/12 16:47:27 by mmiyahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c == EOF || c > 255)
		return (0);
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (1);
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (1);
	return (0);
}

// #include <ctype.h>
// int main(){
//     int i;

//  	i = -1;
//  	while (i < 530)
//  	{
//  		if (!!ft_isalpha(i) != !!isalpha(i))
//  			printf("Mismatch at: %d\n", i);
//  		i++;
//  	}

//     printf("Ccomplete");
// }