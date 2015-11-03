/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 17:02:41 by tgarcia           #+#    #+#             */
/*   Updated: 2015/10/29 17:32:39 by tgarcia          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
