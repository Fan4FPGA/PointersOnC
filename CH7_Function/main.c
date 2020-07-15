#include "stdio.h"
#include "even_parity.h"
#include "clear_array.h"

int hermite(int n, int x)
{
    if(n<=0)
        return 1;
    else if (n == 1)
    {
        return 2*x;
    }
    else
    {
        return 2*x*hermite(n-1,x) - 2*(n-1)*hermite(n-2,x);
    }
}

void 
main(void)
{
    // int num = 0x37;
    
    // if(even_parity(num,8))
    //     printf("parity of num is even!\n");
    // else
    //     printf("parity of num is odd!\n"); 

    // int i;
    // int array[5] = {0x11,0x22,0x33,0x44,0x55};
    // for(i = 0; i<5; i++)
    //     printf(" %d ",array[i]);
    // printf("\n");
    // clear_array(array,5);
    // for(i = 0; i<5; i++)
    //     printf(" %d ",array[i]);

    printf("result of hermite(3,2) is %d \n",hermite(3,2));
}