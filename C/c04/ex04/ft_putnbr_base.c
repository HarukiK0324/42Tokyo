#include <unistd.h>

int	valid_base(char *base)
{
	char	*ptr;
	char	*check;
	char	c;

	if (*base == '\0' || *(base + 1) == '\0')
	{
		return (0);
	}
	ptr = base;
	while (*ptr != '\0')
	{
		c = *ptr;
		check = ptr + 1;
		while (*check != '\0')
		{
			if (*check == c || c == '+' || c == '-' || c <= 31 || c >= 127)
			{
				return (0);
			}
			check++;
		}
		ptr++;
	}
	return (1);
}

void	print_num(unsigned int nbr, char *base, unsigned int mod)
{
	char	c;

	c = base[nbr % mod];
	if (nbr >= mod)
	{
		print_num(nbr / mod, base, mod);
	}
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	num;
	unsigned int	mod;

	if (!valid_base(base))
	{
		return ;
	}
	mod = 0;
	while (base[mod] != '\0')
	{
		mod++;
	}
	num = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	print_num(num, base, mod);
}

int	main(void)
{
	int		n;
	char	base[] = "0123456789ABCDEF";

	n = -2147483647;
	ft_putnbr_base(n, base);
	return (0);
}
