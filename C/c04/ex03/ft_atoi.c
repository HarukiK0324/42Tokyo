
int    ctoi(char *str)
{
    int    i;
    int    num;
    int    base_10;

    i = 0;
    base_10 = 1;
    num = 0;
    while (*str >= '0' && *str <= '9')
    {
        i++;
        str++;
    }
    str--;
    while (i > 0)
    {
        num += base_10 * ((int)(*str) - 48);
        base_10 *= 10;
        str--;
        i--;
    }
    return (num);
}

int    ft_atoi(char *str)
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
    num = ctoi(str);
    return (sign * num);
}