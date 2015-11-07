/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 09:36:23 by tgarcia           #+#    #+#             */
/*   Updated: 2015/11/02 18:37:11 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (dest[i] && n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
