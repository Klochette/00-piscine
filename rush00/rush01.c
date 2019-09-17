/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 18:06:42 by nnguyen-          #+#    #+#             */
/*   Updated: 2018/08/05 16:26:00 by nnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int o;

	o = 1;
	while (o <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 && o == 1) || (i == x && o == y))
				ft_putchar('/');
			else if (i < x && i > 1 && o < y && o > 1)
				ft_putchar(' ');
			else if ((i > 1 && i < x && (o == 1 || o == y))
					|| ((o > 1 && o < y) && (i == 1 || i == x)))
				ft_putchar('*');
			else if ((i == 1 && o == y) || (i == x && o == 1))
				ft_putchar('\\');
			if (i == x)
				ft_putchar('\n');
			i++;
		}
		o++;
	}
}
