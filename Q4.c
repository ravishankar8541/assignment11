//Write a function to find the next prime number of a given number. (TSRS)
#include"stdio.h"
int NextPrime(int);
int main()
{
 int n;  
   printf("Enter a number :");
   scanf("%d",&n);
   int bag=NextPrime(n);
   printf("%d",bag);
   return 0;

}
int NextPrime(int x)
{
  int i,j;
   for( i=x+1;1;i++)
   {
    for(j=2;j<=i;j++)
    {
      if(i%j==0)
      break;
    }
    if(i==j)
    return i;
   }
}