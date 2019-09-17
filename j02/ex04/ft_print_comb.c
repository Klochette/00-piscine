/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 22:33:20 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/03 13:31:10 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_num(int a, int b, int c)
{
	ft_putchar(c + '0');
	ft_putchar(b + '0');
	ft_putchar(a + '0');
	if (c < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 2;
	b = 1;
	c = 0;
	while (c <= 7)
	{
		while (b <= 8)
		{
			while (a <= 9)
			{
				if (a != b && b != c && a != c)
					ft_print_num(a, b, c);
				a = a + 1;
			}
			b = b + 1;
			a = b + 1;
		}
		c = c + 1;
		b = c + 1;
		a = b + 1;
	}
}
