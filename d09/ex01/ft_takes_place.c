/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:52:13 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/10 16:36:12 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_time(int hour);

void	ft_takes_place(int hour)
{
	if (hour < 25 && hour > -1)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		ft_print_time(hour);
		printf(" AND ");
		ft_print_time(hour + 1);
		printf("\n");
	}
}

void	ft_print_time(int hour)
{
	if (hour == 0)
		printf("12.00 A.M.");
	else if (hour < 10)
		printf("0%i.00 A.M.", hour);
	else if (hour < 12)
		printf("%i.00 A.M.", hour);
	else if (hour == 12)
		printf("%i.00 P.M.", hour);
	else if (hour < 22)
		printf("0%i.00 P.M.", hour - 12);
	else if (hour < 24)
		printf("%i.00 P.M.", hour - 12);
	else if (hour == 24)
		printf("%i.00 P.M.", hour - 12);
	else if (hour == 25)
		printf("01.00 A.M.");
}
