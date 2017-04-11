void ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	chr;

	chr = '0';
	while (chr <= '9')
	{
		ft_putchar(chr);
		chr++;
	}
}
