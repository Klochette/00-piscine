/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 16:16:56 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/23 13:28:55 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (length >= 0 && length <= 2)
		return (1);
	while (i < length - 1 && f(tab[i], tab[i + 1]) <= 0)
		i++;
	if (i == length - 1)
		return (1);
	i = 0;
	while (i < length - 1 && f(tab[i], tab[i + 1]) >= 0)
		i++;
	if (i == length - 1)
		return (1);
	return (0);
}
