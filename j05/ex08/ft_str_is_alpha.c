/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 15:20:59 by tgarcia           #+#    #+#             */
/*   Updated: 2015/11/02 18:42:03 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	if (ft_strlen(str) == 0)
		return (1);
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
				&& !(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
