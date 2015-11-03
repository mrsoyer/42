/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 16:29:37 by tgarcia           #+#    #+#             */
/*   Updated: 2015/10/29 19:58:33 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		begin;
	int		end;
	char	temp;

	i = 0;
	begin = 0;
	while (str[i] != '\0')
		i++;
	end = i - 1;
	while (begin < i / 2)
	{
		temp = str[begin];
		str[begin] = str[end];
		str[end] = temp;
		begin++;
		end--;
	}
	return (str);
}
