/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 12:30:05 by tgarcia           #+#    #+#             */
/*   Updated: 2015/10/29 21:45:22 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int stock_nb;

	stock_nb = 1;
	if ((power != 0 && nb == 0) || power < 0)
	{
		return (0);
	}
	if (power == 1)
	{
		return (nb);
	}
	if (power == 0 || (nb < 0 && power < 0))
	{
		return (1);
	}
	while (0 < power)
	{
		stock_nb = stock_nb * nb;
		power--;
	}
	return (stock_nb);
}
