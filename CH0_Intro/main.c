#include "stdio.h"
#include "main.h"
unsigned char GetSting[];
#define MAX_Col 20

#define TEST5

float calcpin2(float i, float n);

void main()
{
  enum Jar_Type{CPU,XXX,YYY};
#ifdef TEST1
  printf("increment result:%d\n",increment(10));
  printf("negate result:%d\n",negate(25));
  printf("100 - 48 result:%d\n",100 - 48);
  printf("100 - '0' result:%d\n",100 - '0');
#endif

#ifdef TEST2
  int num =0;
  int i;
  int n = 1;
  for(i = 1; i<=100; i++)
  {

    int falg = 0;
    for(n=1; n<=100; n++)
    {
      if(i%n == 0) falg++;   
    }
    if(falg == 2)
    {
      num++;
      printf("The%dzhishu:%d\n",num,i);
    } 
  }
#endif

#ifdef TEST3
  int num;
  int i;
  while ((num < MAX_Col)&& (scanf("%d",&GetSting[num]) == 1) && GetSting[num]>0)
  {
    num++;
  }
  
  for(i= 0; i< 20; i++)
    printf("First Program of Pointers On C+%d",GetSting[i]);
#endif

/*
* Calc a pingfanggen of n
*/

#ifdef TEST4
  int cnt;
  float pf2;
  float n = 5;
  for(cnt = 1; cnt < 100; cnt++)
  {
    if(cnt == 1)
      pf2 = calcpin2(1, n);
    else
    {
      pf2 = calcpin2(pf2, n);
    }
  }

  printf("pinggenof5is:%f",pf2);

#endif

#ifdef TEST5
  
  scanf("%s",&GetSting);
  // for (int i = 5 ;i < 10; i++)
  // {
  //   GetSting[i] = '\0';
  // }
  GetSting[4] = '\0';
   printf("-%s-\n",&GetSting);
   printf("-%s-\n",&GetSting[5]);
  // int a;
  // int b;
  // int c;
  // scanf("%d",&a);
  // scanf("%d",&b);
  // printf("a+b=%d\0\0\0\0\0",a+b);
#endif


}

float calcpin2(float i, float n)
{
  return (i+n/i)/2;
}
