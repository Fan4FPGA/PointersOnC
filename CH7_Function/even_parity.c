
int
even_parity(int value, int n_bits)
{
    int numOfone = 0;
    while (n_bits > 0)
    {
        numOfone += value & 0x1;
        value >>= 1;
        n_bits -=1 ;
    }
    /*
    **  if numOfone%2 = 0 return 1,indicates value have 2n*'1'
    */    
    return (numOfone%2) == 0; 
}