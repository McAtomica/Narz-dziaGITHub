silniaR(int n)
{
    if(n<2)
    return 1;
    else return n*silniaR(n-1);
}