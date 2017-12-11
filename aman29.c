#include<stdio.h>
void main()
{
    int a,b,c,i,s;
    int prime (int n);
    printf("enter the two number ");
    scanf("%d%d",&a,&b);
    printf("prime number between %d and %d is ",a,b);
    for(i=a+1;i<b;++i)
    {
       c=prime(i);
       if(c==1)
       {
           printf("\n %d", i);
       }
    }
    getch();
}
int prime(int n)
{ int j,s=1;
    for (j=2;j<= n/2;++j)
    {
       if(n%j==0)
       {
           s=0;

         break;
       }

    }

    return s;
}
