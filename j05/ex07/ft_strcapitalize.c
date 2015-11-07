/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 15:16:47 by tgarcia           #+#    #+#             */
/*   Updated: 2015/11/02 18:40:55 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] <= 'z' && str[i] >= 'a')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
				if (str[i] < '0' || str[i] > '9')
					str[i + 1] -= 32;
		i++;
	}
	return (str);
}
