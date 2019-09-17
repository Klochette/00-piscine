/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:19:12 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/04 11:22:52 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(void)
{
	int a;	

	a = 420;

	while (a > 9)
	{
			
		if (a < 0)
		{	
			ft_putchar('-');
		}
		ft_putchar((a/10)+ '0');
		ft_putchar((a%10)+ '0');
		a++;
	}

}

int		main(void)
{
	ft_putnbr();
	return (0);
}
