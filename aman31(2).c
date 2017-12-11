#include<stdio.h>
void main()
{
   int a,s;
   int sum(int );
   printf("enter the number ");
   scanf("%d",&a);
   printf("\nsum of %d even number is ",a);
   s=sum(a);
   printf(" %d",s);
   getch();

}
int sum (int n)
{
    int t;
    if (n%2==0)
{
   if(n!=0)
        return n+sum(n-2);
   else
    return n;
}
else
    return n=0;

}

