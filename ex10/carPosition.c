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

int carPosition(unsigned int parkingRow)
{
	int count = 0;
	int i;

	for (i = 0; parkingRow; i++)
	{
		if (parkingRow & 1)
			count++;
		parkingRow >>= 1;
	}
	if (!i || count != 1)
		return -1;
	return i- 1;
}