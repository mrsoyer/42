/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 12:55:27 by tgarcia           #+#    #+#             */
/*   Updated: 2015/10/29 21:47:53 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((power != 0 && nb == 0) || power < 0)
	{
		return (0);
	}
	if (power == 0 || (nb < 0 && power < 0))
	{
		return (1);
	}
	if (power > 1)
	{
		return (ft_recursive_power(nb, power - 1) * nb);
	}
	else
	{
		return (nb);
	}
}
