int średnia(int n){
    int i=1,s=1;
    while(n>=i)
    {
        s=s*i;
        i++;
    }
    return s;
}
