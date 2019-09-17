/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 20:46:09 by mchamayo          #+#    #+#             */
/*   Updated: 2018/08/10 16:25:22 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_rot_char(char c)
{
	if ((c > 64 && c < 75) || (c > 96 && c < 107))
		return (c + 16);
	else if (c > 76 && c < 91)
		return (c + 16 - 90 + 64);
	else if (c > 106 && c < 123)
		return (c + 16 - 122 + 96);
	else
		return (c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_rot_char(str[i]);
		i++;
	}
	return (str);
}
