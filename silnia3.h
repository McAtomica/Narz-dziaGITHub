int Metraż(int n){
    if(n<2)
    return 1;
    else return n*Metraż(n-1);
}
