/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 12:30:14 by tgarcia           #+#    #+#             */
/*   Updated: 2015/11/06 14:00:49 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strev(char *tab)
{
	int i;
	int begin;
	int end;
	char temp;

	i=0;
	begin = 0; 
	while(tab[i] != '\0')
		i++;
	end = i-1;

	while (begin < i/2)
	{
	
		temp = tab[begin];
		tab[begin] = tab[end];
		tab[end] = temp;
		end--;
		begin++;
	}
	return (tab);


}

int ft_count_nbr(int i)
{
	int j;
	j = 0;
	if(i < 0)
	{
		j++;
		i = -i;
	}
	while(i != 0)
	{
		i = i/10;
		j++;
	}
	return (j);

}

char *ft_putnbr(int i, int k)
{
	char *tab;
	int negative;
	int j;

	if(!(tab = (char *)malloc(sizeof(char)*(k + 1))))
				return(NULL);
	j = 0;
	negative = 0;
	if(i < 0)
	{
		negative = 1;
		i = -i;
	}
	while(i > 0)
	{
		tab[j] = (i%10) + '0';
		i = i/10;
		j++;

	}
	if (negative == 1)
	{
		tab[j] = '-';
		j++;
	}
	tab[j] = '\0';
	return (tab);
		
}



char *ft_itoa(int i)
{
	char *tab;
	int k;
	k = ft_count_nbr(i);
	tab = ft_putnbr(i,k);
	tab = ft_strev(tab);
	return (tab);

}

int main(void)
{
	printf("%s",ft_itoa(-35897));
}
