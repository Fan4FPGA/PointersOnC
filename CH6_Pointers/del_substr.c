#include <stdio.h>

int del_substr(char *str, char const *substr)
{
    int numOfstr = 0;
    int numOfsubstr = 0;
    int i,n;
    int cntOfSameDat = 0;
    char *addr = str;
    while (*(substr+numOfsubstr) != '\0')
    {
        numOfsubstr++;
    }
  //  numOfsubstr = 3;
    printf ("%s\n",substr);

    printf("numofsubstr is :%d\n",numOfsubstr);
    
    while (*addr++ != '\0')
    {
        numOfstr++;
    }
    printf("numofstr is :%d\n",numOfstr);

    for(i=0; i<numOfstr; i++)
    {
        for(n = 0; n < numOfsubstr; n++)
        {
            printf("tr+n+i:%s\n",str+n+i);
            printf("substr+n:%s\n",substr+n);
            if(*(str+i+n) == *(substr+n))
            {
                cntOfSameDat++;
            }
            else
            {
                cntOfSameDat =0;
            }  
        }
        printf("i is :%d\n",i);
        printf("cntOfSameDat is :%d\n",cntOfSameDat);
        if(cntOfSameDat == numOfsubstr)
        {
             printf("i=%d\n",i);

            for(n = 0; n < numOfsubstr; n++)
            {
                *(str+i+n )= *(str+i+n+3);
            }
            *(str+i+n) = '\0';
            return 1;
        }
        
    }
    return 0;


    
}