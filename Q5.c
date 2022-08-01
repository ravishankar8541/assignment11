//Write a function to print first N prime numbers (TSRN)
#include"stdio.h"
void PrintPrime(int);
int main()
{
   int n;
   printf("Enter a number :");
   scanf("%d",&n);                                                                     
   PrintPrime(n);
   return 0;
}
void PrintPrime(int x)
{
    int i,j,count;
    for(i=2;i<=x;i++)
    {
         count=0;
        for (j=1;j<=i;j++)
        {
            if(i%j==0)                                                                                                                                     
            count++;
        }
      if(count==2)
      {
      printf("%d,",i);
    }  } 
}