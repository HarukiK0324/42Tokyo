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

int size_of(char *str)
{
    int i;
    
    i = 0;
while(str[i] != '\0')
{
    i++;
}
return i;
}

int strtoi(char *str, char *base,int base_size)
{
    int i;
    int num;
    int base_num;

    i = 0;
    num = 0;
    base_num = 1;
    while(str[i] >= '0' && str[i] <= '9')
    {
        i++;
    }
    while(i > 0)
    {
        num += base_num * atoi(str[i--],base);
        base_num *= base_size;
    }
    return num;
}

int atoi(char c,char *base)
{
    int i;
    
    i = 0;
    while(*base != c)
    {
        i++;
    }
    return i;
}

int ft_atoi_base(char *str, char *base)
{
    int    sign;
    int    num;

    sign = 1;
    while (*str == ' ')
    {
        str++;
    }
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
        {
            sign *= -1;
        }
        str++;
    }
    if(!valid_base(base))
    {
        return 0;
    }
    num = strtoi(str,base,size_of(base));
    return (sign * num);
}