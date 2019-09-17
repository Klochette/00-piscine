/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 00:05:58 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/21 14:57:59 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

typedef struct	s_op
{
	char	op;
	int		(*ft)(int a, int b);
}				t_op;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);
int				ft_mo(int a, int b);
int				ft_di(int a, int b);
int				ft_ad(int a, int b);
int				ft_su(int a, int b);
int				ft_mu(int a, int b);

#endif
