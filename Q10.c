/*Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the 
function*/
#include"stdio.h"
void factSum(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    factSum(n);
    return 0;
}
int fact(int x)
{
    int i,y=1;
    for(i=1;i<=x;i++)
    {
    y=y*i;
    } 
    return y;
}
void factSum(int x)
{
   int i,sum=0;
    for( i=1;i<=x;i++)
    {
         sum=sum+fact(i)/i;
    }
    printf("%d",sum);
}