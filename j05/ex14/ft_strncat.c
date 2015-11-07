/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 17:24:40 by tgarcia           #+#    #+#             */
/*   Updated: 2015/11/02 17:26:33 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int count;

	i = 0;
	count = ft_strlen(dest);
	while (nb != 0 && src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
		nb--;
	}
	dest[count + i] = '\0';
	return (dest);
}
