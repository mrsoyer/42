//

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
