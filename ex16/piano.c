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
#include <math.h>

#include "header.h"

int **pianoDecompress(struct s_bit *bit, int l)
{
	int **arr = malloc(sizeof(int *) *bit->n);
	for (int i = 0; i < bit->n; i++)
	{
		arr[i] = malloc(sizeof(int)* l-1);
		int j = 0;
		for (j = 0; bit->arr[i] -1; j++)
			bit->arr[i] = bit->arr[i] >> 1;
		arr[i][j] = 1;
	}
	return arr;
}