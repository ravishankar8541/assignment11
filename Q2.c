//Write a function to calculate HCF of two numbers. (TSRS)
#include"stdio.h"
int CalHCF(int,int);
int main()
{
    int n1,n2;
    printf("Enter two number :");
    scanf("%d %d",&n1,&n2);
    int k=CalHCF(n1,n2);
    printf("%d",k);
    return 0;
}
int CalHCF(int a,int b)
{  
    int H;
    for(H=a<b?a:b;H>=1;H--){
        if((a%H==0) && (b%H==0)){
          break;
        }
    }

    return H;
}