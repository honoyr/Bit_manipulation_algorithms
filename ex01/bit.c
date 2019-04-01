/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:44:41 by dgonor            #+#    #+#             */
/*   Updated: 2019/03/31 15:44:45 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf, scanf, ...
#include <string.h> //memcpy, strlen, ...
#include <unistd.h> //fork, write, sleep...
#include <stdlib.h> //malloc, free, exit...

#include "header.h"

char *getAnd(char *a, char *b)
{
	int		i = 0;
	char	*res = (char*)malloc(sizeof(char) * 5);
	res[4] = 0;
	while (i < 4)
	{
		if (*a == *b)
		{
			res[i] = (*a - '0') ? '1' : '0';
		}
		else
			res[i] = '0';
		i++;
		a++;
		b++;
	}
	return res;
}

char *getOr(char *a, char *b)
{
	int		i = 0;
	char	*res = (char*)malloc(sizeof(char) * 5);
	res[4] = 0;
	while (i < 4)
	{
		if (*a == *b)
		{
			res[i] = (*a - '0') ? '1' : '0';
		}
		else
			res[i] = '1';
		i++;
		a++;
		b++;
	}
	return res;
}

int toInt(char *bits)
{
	int		m = 8;
	int		res = 0;
	while (*bits)
	{
		res += (*bits - '0') ? m : 0;
		m /= 2;
		bits++;
	}
	return res;
}