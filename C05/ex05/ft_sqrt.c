int	ft_sqrt(int nb)
{
	long long	num;

	num = 0;
	while (num * num < nb)
		num++;
	if (num * num == nb)
		return (num);
	return (0);
}
