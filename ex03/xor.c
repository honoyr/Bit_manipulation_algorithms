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
	for (int i = 0; i < 6; i++)
		a[i] = (a[i] - '0') ^ (b[i] - '0') + '0';
	return (a);
}

int toInt(char *bits)
{
		int n = 0;
	for (int i = 0; i < 6; i++)
	{	
		n += ((bits[i] - '0') * (1 << (5 - i)));
		// printf("NUM = %i\n", (1 << (5 - i)));
	}
	return (n);
}