/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:20:53 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/05 19:31:09 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int negatif;
	int resultat;

	i = 0;
	negatif = 1;
	resultat = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == ' ')
		i = i + 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negatif = -1;
		i = i + 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = (resultat * 10) + (str[i] - '0');
		i = i + 1;
	}
	return (resultat * negatif);
}
