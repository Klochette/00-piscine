/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:40:39 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/22 16:29:18 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *ret;

	i = 0;
	if (!(ret = malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}
