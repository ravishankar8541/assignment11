//Write a function to print all Prime numbers between two given numbers. (TSRN)
#include"stdio.h"
void PrintPrime(int,int);
int main()
{
   int n1,n2;
   printf("Enter a first:");
   scanf("%d",&n1); 
   printf("Enter last number :");
   scanf("%d",&n2);                                                                    
   PrintPrime(n1,n2);
   return 0;
}
void PrintPrime(int x,int y)
{
    int i,j,count;
    for(i=x+1;i<y;i++)
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