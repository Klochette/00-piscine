/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 16:30:03 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/10 16:30:46 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);

char	*ft_strlowcase(char *str);

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], "president") == 0
				|| ft_strcmp(argv[i], "attack") == 0 ||
				ft_strcmp(argv[i], "bauer") == 0)
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_strlowcase(s1);
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		while (s1[i] < 34)
			i++;
		while (s2[j] < 34)
			j++;
		if (s1[i] != s2[j])
			return (1);
		else
		{
			i++;
			j++;
		}
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
