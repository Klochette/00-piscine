/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 14:46:06 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/07 12:17:48 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	if ((nb > 0 || nb < 0) && power > 0)
	{
		nb = nb * ft_recursive_power(nb, (power - 1));
	}
	return (nb);
}
