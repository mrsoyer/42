/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 16:30:25 by tgarcia           #+#    #+#             */
/*   Updated: 2015/10/29 16:53:02 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			j++;
		}
		i++;
	}
	if (j == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
