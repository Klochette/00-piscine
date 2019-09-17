/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 21:27:48 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/23 00:07:36 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_do_op(char op, int a, int b)
{
	int		i;
	t_op	sign[5];

	sign[0].op = '+';
	sign[1].op = '-';
	sign[2].op = '*';
	sign[3].op = '/';
	sign[4].op = '%';
	sign[0].ft = &ft_ad;
	sign[1].ft = &ft_su;
	sign[2].ft = &ft_mu;
	sign[3].ft = &ft_di;
	sign[4].ft = &ft_mo;
	i = 0;
	while (i < 5)
	{
		if (op == sign[i].op)
			return (sign[i].ft(a, b));
		i++;
	}
	return (0);
}

void	ft_result(char **argv)
{
	int nba;
	int nbb;
	int result;

	nba = ft_atoi(argv[1]);
	nbb = ft_atoi(argv[3]);
	if (argv[2][0] == '%' && nbb == 0)
		ft_putstr("Stop : modulo by zero\n");
	else if (argv[2][0] == '/' && nbb == 0)
		ft_putstr("Stop : division by zero\n");
	else
	{
		result = ft_do_op(argv[2][0], nba, nbb);
		ft_putnbr(result);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4 && argv[2][1] == 0)
	{
		ft_result(argv);
	}
	else if (argc != 4)
	{
		return (0);
	}
	else
		ft_putstr("0\n");
}
