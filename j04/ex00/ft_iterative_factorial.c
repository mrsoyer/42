/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 09:54:40 by tgarcia           #+#    #+#             */
/*   Updated: 2015/10/29 11:45:58 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int stock_nb;

	stock_nb = nb;
	i = 2;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	if (nb > 1 || nb <= 12)
	{
		while (i < nb)
		{
			stock_nb = stock_nb * i;
			i++;
		}
		return (stock_nb);
	}
}
