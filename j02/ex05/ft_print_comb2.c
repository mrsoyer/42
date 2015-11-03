/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <tgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 17:31:13 by tgarcia           #+#    #+#             */
/*   Updated: 2015/10/28 11:31:19 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_pc_display(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar('0' + n);
	}
	else
	{
		ft_putchar('0' + n / 10);
		ft_putchar('0' + n % 10);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_pc_display(i);
			ft_putchar(' ');
			ft_pc_display(j);
			if (!(i == 98 && j == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
