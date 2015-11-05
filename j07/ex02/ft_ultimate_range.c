/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:52:38 by tgarcia           #+#    #+#             */
/*   Updated: 2015/11/03 18:05:33 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int tabsize;
	int *tab;
	int *null_ptr;

	tabsize = max - min;
	i = 0;
	if (!(tab = malloc(sizeof(*tab) * (tabsize))))
	{
		null_ptr = NULL;
		return (null_ptr);
	}
	while (i < tabsize)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	long int tabsize;
	long int min_l;
	long int max_l;

	min_l = min;
	max_l = max;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tabsize = max_l - min_l;
	if (tabsize > 2147483647 || tabsize < -2147483648)
		return (0);
	*range = ft_range(min, max);
	return (max - min);
}
