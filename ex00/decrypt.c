/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decrypt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:12:10 by dgonor            #+#    #+#             */
/*   Updated: 2019/03/30 19:12:14 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf, scanf, ...
#include <string.h> //memcpy, strlen, ...
#include <unistd.h> //fork, write, sleep...
#include <stdlib.h> //malloc, free, exit...

#include "header.h"

char *getSum(char *a, char *b)
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
	int		maska[] = {32,16,8,4,2,1};
	int		res = 0;
	int		i = 0;
	while (*bits)
	{
		if ((*bits - '0'))
			// printf("CHAR = %c\nINT = %i\nMASKA =%i\n",*bits, (*bits - '0'), maska[i]);
			res += maska[i];
		bits++;
		i++;
	}
	return res;
}