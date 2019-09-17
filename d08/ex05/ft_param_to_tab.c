/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 12:52:41 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/19 17:28:57 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

char					*ft_strdup(char *src)
{
	int		i;
	int		d;
	char	*dest;

	i = 0;
	d = ft_strlen(src);
	dest = malloc(sizeof(char) * (d + 1));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*place;
	int				i;

	i = 0;
	if (!(place = malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		place[i].copy = ft_strdup(av[i]);
		place[i].size_param = ft_strlen(av[i]);
		place[i].str = av[i];
		place[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	place[i].str = 0;
	return (place);
}
