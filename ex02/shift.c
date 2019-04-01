/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 20:03:58 by dgonor            #+#    #+#             */
/*   Updated: 2019/03/31 20:04:00 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h> //printf, scanf, ...
#include <string.h> //memcpy, strlen, ...
#include <unistd.h> //fork, write, sleep...
#include <stdlib.h> //malloc, free, exit...

#include "header.h"

#define LEN	6
#define BIT	32
char *rightShift(char *bin, int k)
{
	printf("%i\n", k);
	int		i = 0;
	char	*res = strdup("111111");
	// memset(res, 1, 6);
	printf("STR = %s\n", res);
	while (i < LEN - k)
	{
		res[i + k] = *bin;
		bin++;
		i++;
	}
	return res;
}

char *leftShift(char *bin, int k)
{
	printf("%i\n", k);
	int		i = 0;
	char	*res = strdup("000000");
	// memset(res, 1, 6);
	printf("STR = %s\n", res);
	while (i < LEN - k)
	{
		res[i] = *(bin + k);
		bin++;
		i++;
	}
	return res;
}

int toInt(char *bits)
{
	int n = 0;
	int sign;

	sign = bits[0] - '0';
	for (int i = 1; i < 6; i++)
		n += ((bits[i] - '0') ^ sign) * (1 << (5 - i));
	n += sign;
	return (sign ? -n : n);
}	