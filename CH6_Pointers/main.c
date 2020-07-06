#include "stdio.h"
#include "string.h"
#include "reverseStr.h"
#include "del_substr.h"
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

#define TRUE  0
#define FALSE 1
char AA [] = "sssssss";
char BB [] = "xxxx";
char CC [] = "sfdsg";
char DD [] = "frank";
char FF [] = "sjdlkf";

char *StrPtr [] = {AA,BB,CC,DD,FF,NULL};
char **StrPtrPtr = &StrPtr[0];

int findchar(char **strings,char value)
{
    char *str;
    while ((str=*strings++) != NULL)
    {
        while (*str != '\0')
        {   
            if(*str++  == value)
                return TRUE;
        }
        
    }
    return FALSE;
    
}

char *find_char( char* const source, char* const chars)
{
    char* p1 = source;
    char *p2 ;
    int i=0;
    while (*p1 != '\0')
    {
        for (p2 = chars;*p2 != '\0';)
        {
            if (*p1 == *p2)
            {
                return source+i;
            }
            p2++;
            
        }
        i++;
        p1++;
        
    }
    return NULL;
    
}

#define TEST5
void main()
{
#ifdef TEST1
     char AA[] = "qwertyuiop";
     char *BB = AA;
    printf("resultA1=%d\n",strlen1(BB));
    printf("resultA2=%d\n",strlen1(&AA[0]));
    printf("resultB=%d\n",strlen1("qwertyuiop"));
    printf("resultC=%ld\n",strlen("qwertyuiop"));
#endif

#ifdef TEST2
    printf("the result = %d\n",findchar(StrPtrPtr,'z'));
    while (*StrPtrPtr != NULL)
    {
        printf("%s\n",*StrPtrPtr);
        StrPtrPtr++;
        /* code */
    }
    

#endif

#ifdef TEST3

    char AA [] = "qwertyuiop";
    char BB [] = "io";
    printf("the result = %s\n",&AA[0]);
    printf("the result = %s\n",find_char(AA,"xx"));
    printf("the result = %s\n",find_char(AA,BB));

#endif

#ifdef TEST4

char AA [] = "abcdefghjkl";
printf("Begin:%s\n",AA);
reverse_string(&AA[0]);
printf("%s",AA);

#endif


#ifdef TEST5

    char AA[] = "abcdefghigk";
    char BB[] = "fgh";
    printf("result is : %d\n",del_substr(AA, BB));
    printf("%s\n",AA);
#endif
}