/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 16:50:15 by tgarcia           #+#    #+#             */
/*   Updated: 2015/11/04 17:11:18 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int tabsize;
	int *tab;
	int	*null_ptr;

	if (min >= max)
	{
		null_ptr = NULL;
		return (null_ptr);
	}
	tabsize = max - min;
	if (!(tab = malloc(sizeof(*tab) * (tabsize))))
		return (NULL);
	i = 0;
	while (i < tabsize)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
