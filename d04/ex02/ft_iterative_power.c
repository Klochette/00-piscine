/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:18:40 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/07 12:13:59 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	if (power < 0 || (nb < 0 && power == 0))
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while ((nb > 1 || nb < 0) && power > 0)
	{
		i = i * nb;
		power = power - 1;
	}
	return (i);
}
