/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 15:12:32 by tgarcia           #+#    #+#             */
/*   Updated: 2015/10/29 13:36:21 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// passe dans a la division et dans b le chiffre apres la virgule

void	ft_ultimate_div_mod(int *a, int *b)
{
	int var_a;

	var_a = *a;
	*a = *a / *b;
	*b = var_a % *b;
}
