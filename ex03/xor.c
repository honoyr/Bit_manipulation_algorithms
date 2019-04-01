/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xor.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 22:34:08 by dgonor            #+#    #+#             */
/*   Updated: 2019/03/31 22:34:10 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf, scanf, ...
#include <string.h> //memcpy, strlen, ...
#include <unistd.h> //fork, write, sleep...
#include <stdlib.h> //malloc, free, exit...

#include "header.h"

char *getXor(char *a, char *b)
{
	int		i = 6;
	int		flag = 0;
	char	*res =(char*)malloc(sizeof(char) * 7);
	res[6] = 0;

	while(i > 0)
	{
		if (flag)
		{
			res[i - 1] = '1';
			flag = 0;
		}
		else
			res[i - 1] = (((a[i - 1] - '0') ^ (b[i - 1] - '0')) + '0');
		if (a[i - 1] == '1' && b[i - 1] == '1')
			flag = 1;

		// printf("XOR = %i\n", (a[i - 1] - '0') ^ (b[i - 1] - '0'));
		i--;
	}
	// printf("STR = %s\n", res);
	return res;
}

int toInt(char *bits)
{
		int n = 0;
	// int sign;

	// sign = bits[0] - '0';
	for (int i = 0; i < 6; i++)
	{	
		n += ((bits[i] - '0') * (1 << (5 - i)));
		printf("NUM = %i\n", (1 << (5 - i)));
	}
	// n += sign;
	return (n);
}