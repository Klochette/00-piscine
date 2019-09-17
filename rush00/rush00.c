/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 14:47:17 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/04 18:18:43 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int xm;
	int ym;

	ym = 0;
	while (ym != y && y > 0 && x > 0)
	{
		xm = 0;
		while (xm != x)
		{
			if ((xm == 0 || xm == x - 1) && (ym == 0 || ym == y - 1))
				ft_putchar('o');
			else if ((ym == 0 || ym == y - 1) && (xm > 0 || xm < x - 1))
				ft_putchar('-');
			else if ((xm == 0 || xm == x - 1) && (ym > 0 || ym < y - 1))
				ft_putchar('|');
			else if ((ym != 0 || y - 1 != ym) && (xm != 0 || x - 1 != xm))
				ft_putchar(' ');
			xm += 1;
		}
		ft_putchar('\n');
		ym += 1;
	}
}
