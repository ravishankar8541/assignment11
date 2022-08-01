//Write a function to print PASCAL Triangle. (TSRN)
#include"stdio.h"
void pascal(int);
int main()
{
    int n;
    printf("Enten a number :");
    scanf("%d",&n);
 pascal(n);
    return 0;
}
int fact(int x)
{
    int y=1;
    for(int i=1;i<=x;i++)
    {
    y=y*i;
    }
    return y;
}
int comb(int n,int r)
{
    
   return fact(n)/(fact(r)*fact(n-r));
}
void pascal(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
}
