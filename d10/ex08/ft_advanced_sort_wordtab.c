/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 18:26:03 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/22 23:08:12 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		find;
	char	*swap;

	i = 0;
	find = 1;
	while (find)
	{
		find = 0;
		i = 0;
		while (tab[i + 1] != 0)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				find = 1;
			}
			i++;
		}
	}
}
