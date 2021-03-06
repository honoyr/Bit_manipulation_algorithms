/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getPlace.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 21:15:54 by dgonor            #+#    #+#             */
/*   Updated: 2019/04/01 21:15:55 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf, scanf, ...
#include <string.h> //memcpy, strlen, ...
#include <unistd.h> //fork, write, sleep...
#include <stdlib.h> //malloc, free, exit...
#include <limits.h> //malloc, free, exit...

#include "header.h"

// int		lenn(int tmp, int base)
// {
// 	int		i;

// 	i = 0;
// 	if (tmp <= 0)
// 		i++;
// 	while (tmp != 0)
// 	{
// 		tmp /= base;
// 		i++;
// 	}
// 	return (i);
// }

// void	ft_help(char *s, int val, int base, int len)
// {
// 	char	*c;

// 	c = "0123456789ABCDEF";
// 	if (val < 0 && base == 10)
// 	{
// 		if (val == -2147483648)
// 		{
// 			s[--len] = '8';
// 			val = 214748364;
// 		}
// 		else
// 			val *= -1;
// 		s[0] = '-';
// 	}
// 	if (val == 0)
// 		s[--len] = '0';
// 	while (val)
// 	{
// 		s[--len] = c[val % base];
// 		val /= base;
// 	}
// }

// char	*ft_itoa_base(int val, int base)
// {
// 	int		len;
// 	char	*str;

// 	len = lenn(val, base);
// 	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
// 		return (NULL);
// 	str[len] = '\0';
// 	ft_help(str, val, base, len);
// 	return (str);
// }

int getPlace(unsigned int parkingRow, int pos)
{
	// printf("ORIG =     %s\n", ft_itoa_base(parkingRow, 2));
	// printf("SHIFT =    %s\n", ft_itoa_base(((parkingRow >> pos)), 2));
	// printf("AND =  	   %s\n", ft_itoa_base(((parkingRow >> pos) & 10), 2));
	return (parkingRow >> pos) & 1;
}