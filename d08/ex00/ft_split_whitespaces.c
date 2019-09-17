/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:40:45 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/17 14:40:54 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_countwords(char *str)
{
	int words;
	int i;

	words = 0;
	i = 0;
	if (str[i] != '\n' && str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		words++;
	i++;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
				&& (str[i - 1] == ' ' || str[i - 1] == '\t'
					|| str[i - 1] == '\n'))
		{
			words++;
		}
		i++;
	}
	return (words);
}

int		ft_countletters(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
	{
		i++;
	}
	return (i + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		nb;

	i = 0;
	nb = ft_countwords(str);
	if (!(tab = malloc(sizeof(char *) * (nb + 1))))
		return (0);
	while (i < nb)
	{
		j = 0;
		while (*str == ' ' || *str == '\n' || *str == '\t')
			str++;
		if (!(tab[i] = malloc(sizeof(char) * (ft_countletters(str) + 1))))
			return (0);
		while (*str != ' ' && *str != '\n' && *str != '\t' && *str != '\0')
		{
			tab[i][j++] = *str;
			str++;
		}
		tab[i++][j] = '\0';
	}
	tab[i] = 0;
	return (tab);
}
