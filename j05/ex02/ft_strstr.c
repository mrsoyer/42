/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 12:13:49 by tgarcia           #+#    #+#             */
/*   Updated: 2015/11/02 12:16:10 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int k;

	i = 0;
	k = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = i;
		k = 0;
		while (str[j] == to_find[k])
		{
			j++;
			k++;
			if (to_find[k] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
