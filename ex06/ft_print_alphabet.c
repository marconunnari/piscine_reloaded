void ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	chr;

	chr = 'a';
	while (chr <= 'z')
	{
		ft_putchar(chr);
		chr++;
	}
}
