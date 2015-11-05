/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 09:31:40 by tgarcia           #+#    #+#             */
/*   Updated: 2015/11/04 17:10:32 by tgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_params(char **argv)
{
	int i;
	int j;
	int count;

	i = 1;
	count = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_params(int argc, char **argv, char *params)
{
	int i;
	int j;
	int count;

	i = 1;
	count = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			params[count] = argv[i][j];
			count++;
			j++;
		}
		if (i != argc - 1)
			params[count++] = '\n';
		i++;
	}
	params[count] = '\0';
	return (params);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		count;
	char	*params;

	if (argc <= 1)
		return ("");
	count = ft_count_params(argv) + argc;
	if (!(params = (char *)malloc(sizeof(*params) * count)))
		return (NULL);
	params = ft_params(argc, argv, params);
	return (params);
}
