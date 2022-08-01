//Write a function to check whether a given number is Prime or not. (TSRS)
#include"stdio.h"
int check_prime(int);
int main()
{
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   int k=check_prime(n);
 if(k==1)
 printf("Prime number ");
 else
 printf("Not prime number");
}
int check_prime(int x)
{
    int  count=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
      count++;
    }
    if(count==2)
    return 1;
    else
    return 0;
}