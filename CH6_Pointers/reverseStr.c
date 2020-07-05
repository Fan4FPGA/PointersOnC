#include "stdio.h"
void reverse_string(char *str)
{   printf("Reverse Start!\n");
    int numofstr = 0;
    int num = 0;
    int i;
    char a;
    char *p = str;
    while (*p++ != '\0')
    {
        numofstr++;
    }
   // numofstr = 11;
    printf("numofstr:%d\n",numofstr);
    
   num = (numofstr%2) ? numofstr - 1 : numofstr;
   printf("num:%d\n",num/2);
   for(i = 0; i <(num/2); i++)
   {
        a =  *(str + i);
        printf("di%dciA=%s\n",i,&a);
        *(str+i) = *(str + numofstr-1-i);
          printf("di%dciB=%s\n",i,(str+i));
        *(str + numofstr-1-i) = a;
        printf("di%dciC=%s\n",i,(str + numofstr-1-i));
   }

}

//a b c d e f
//b a c d e f
//b c a d e f
//b c d a e f
//b c d e a f
//b c d e f a

//a b c d e f
//f b c d e a
//f e c d b a
//f e d c b a