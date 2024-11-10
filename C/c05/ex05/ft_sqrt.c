int ft_sqrt(int nb)
{
    int num;

    num = 1;
    while(num * num < nb)
    {
        num++;
    }
    if(num * num == nb){
        return num;
    }
    return 0;
}