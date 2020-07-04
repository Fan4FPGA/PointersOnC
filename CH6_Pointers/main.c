#include "stdio.h"
#include "string.h"

int strlen1(char *str)
{
    int length0 = 0;
    int length1 = 0;
    int length2 = 0;
    while (*str++  != '\0')
    {
        length0 += 1;
        length1++;
        ++length2;
    }
    printf("length0=%d\nlength1=%d\nlength2=%d\n",length0,length1,length2);
    return length0;
    
}

void main()
{
     char AA[] = "qwertyuiop";
     char *BB = AA;
    printf("resultA1=%d\n",strlen1(BB));
    printf("resultA2=%d\n",strlen1(&AA[0]));
    printf("resultB=%d\n",strlen1("qwertyuiop"));
    printf("resultC=%ld\n",strlen("qwertyuiop"));
}