/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 11:54:34 by tgarcia           #+#    #+#             */
/*   Updated: 2015/10/29 12:21:43 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
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
		return (ft_recursive_factorial(nb - 1) * nb);
	}
}
