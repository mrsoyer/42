/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 17:07:41 by tgarcia           #+#    #+#             */
/*   Updated: 2015/11/04 17:07:48 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *nbr)
{
	int i;

	i = 0;
	while (nbr[i])
		i++;
	return (i);
}

int		ft_search(char c, char *base_from)
{
	int i;

	i = 0;
	while (base_from[i])
	{
		if (base_from[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *nbr, char *base_from)
{
	int		i;
	int		j;
	int		flag;

	i = 0;
	flag = 0;
	j = 0;
	while ((nbr[i] >= '\t' && nbr[i] <= '\r') || nbr[i] == ' ')
		i++;
	if (nbr[i] == '-')
		flag = 1;
	if (nbr[i] == '-' || nbr[i] == '+')
		i++;
	while (ft_search(nbr[i], base_from) != -1)
	{
		j = (j * ft_strlen(base_from)) + ft_search(nbr[i], base_from);
		i++;
	}
	if (flag == 1)
		return (-j);
	return (j);
}

char	*ft_strrev(char *str)
{
	int		tmp;
	int		i;
	int		count;

	i = 0;
	count = ft_strlen(str) - 1;
	while (i < count)
	{
		tmp = str[i];
		str[i] = str[count];
		str[count] = tmp;
		count--;
		i++;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result;
	char	*sum;
	int		n;
	int		r;

	n = 0;
	result = ft_atoi_base(nbr, base_from);
	if (!(sum = (char *)malloc(sizeof(sum) * 33 + 1)))
		return (NULL);
	if (result == 0)
	{
		sum[n] = base_to[n];
		sum[n + 1] = '\0';
		return (sum);
	}
	while (result != 0)
	{
		r = result % ft_strlen(base_to);
		result = result / ft_strlen(base_to);
		sum[n] = base_to[r];
		n++;
	}
	sum[n] = '\0';
	sum = ft_strrev(sum);
	return (sum);
}
