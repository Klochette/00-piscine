/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 12:36:55 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/16 21:37:29 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src, int last)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	if (last != 1)
	{
		dest[i + j] = '\n';
		dest[i + j + 1] = '\0';
	}
	else
		dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		last;
	int		len;
	int		j;

	len = 0;
	j = 0;
	last = 0;
	str = 0;
	while (len < argc && argv[j++])
		len++;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (0);
	j = 0;
	while (j < argc - 1)
	{
		if (j + 2 == argc)
			last = 1;
		ft_strcat(str, argv[j + 1], last);
		j++;
	}
	return (str);
}
