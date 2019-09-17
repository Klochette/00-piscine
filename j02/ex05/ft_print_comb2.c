/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 17:56:13 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/03 13:52:25 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_num(int a, int b)
{
	ft_putchar((b / 10) + '0');
	ft_putchar((b % 10) + '0');
	ft_putchar(' ');
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
	if (b < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 1;
	b = 0;
	while (b <= 98)
	{
		while (a <= 99)
		{
			if (a != b)
			{
				ft_num(a, b);
				a++;
			}
		}
		b = b + 1;
		a = b + 1;
	}
}
