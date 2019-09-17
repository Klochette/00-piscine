/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cylemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 15:39:10 by cylemair          #+#    #+#             */
/*   Updated: 2018/08/04 15:39:12 by cylemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int ix;
	int iy;

	iy = 0;
	while (iy != y && x > 0 && y > 0)
	{
		ix = 0;
		while (ix != x)
		{
			if ((ix == 0 && iy == 0)
				|| (ix == x - 1 && iy == y - 1 && y > 1 && x > 1))
				ft_putchar('A');
			else if ((ix == x - 1 && iy == 0) || (iy == y - 1 && ix == 0))
				ft_putchar('C');
			else if ((ix > 0 && ix < x - 1 && (iy == 0 || iy == y - 1))
					|| ((ix == 0 || ix == x - 1) && (iy > 0 && iy < y - 1)))
				ft_putchar('B');
			else if (ix > 0 && ix < x - 1 && iy > 0 && iy < y - 1)
				ft_putchar(' ');
			ix += 1;
		}
		ft_putchar('\n');
		iy += 1;
	}
}
