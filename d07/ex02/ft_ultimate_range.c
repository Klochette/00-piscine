/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 18:49:59 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/17 14:25:32 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int i;
	int m;

	m = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(*range = malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	tab = *range;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (m);
}
