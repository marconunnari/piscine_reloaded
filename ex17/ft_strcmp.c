int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (!(res = s1[i] - s2[i]) && s1[i])
		i++;
	return (res);
}
