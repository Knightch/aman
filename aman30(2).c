#include<stdio.h>
void main()
{
   int a,s;
   int sum (int );
   printf("enter the natural number ");
   scanf("%d",&a);
   printf("\nsum of  %dth natural number is  ",a);
   s=sum(a);
   printf("%d",s);
   getch();
}
int sum (int n)
{
    if (n!=0)
       return n+sum(n-1);
    else
        return(n);
}
