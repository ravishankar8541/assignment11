/*
Write a function to calculate LCM of two numbers. (TSRS)
*/
#include"stdio.h"
int cal_LCM(int,int);
int main()
{
    int n1,n2;
    printf("Enter first number :");
    scanf("%d",&n1);
    printf("Enter second number :");
    scanf("%d",&n2);
    int k=cal_LCM(n1,n2);
    printf("%d",k);
    return 0;
}
int cal_LCM(int a,int b)
{
int i;
    for( i=1;i<=a*b;i++){
         if(i%a==0 && i%b==0){
            break;
         }
    }
 return i;   
}