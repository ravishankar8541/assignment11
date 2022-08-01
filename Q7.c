//Write a function to print first N terms of Fibonacci series (TSRN)

#include"stdio.h"
void Fib(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    Fib(n);
    return 0;
}
void Fib(int x)
{
    int t,i,j;
    for(i=1;i<=x;i++)
    {
      t=1;
        for(j=1;j<=i;j++)
      {
        t=t*j;
      }
      printf("\n Fibonacci of %d is %d",i,t);
    }
}
