int ft_is_prime(int nb)
{
    int num;

    num = 2;
    if(nb <= 1)
    {
        return 0;
    }
    while(num * num <= nb)
    {
        if(nb % num == 0){
            return 1;
        }
        num++;
    }
    return 0;
}