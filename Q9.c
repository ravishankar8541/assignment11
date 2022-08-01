//Write a program in C to find the square of any number using the function.
#include"stdio.h"
void fun(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    fun(n);
return 0;
}
void fun(int x)
{
    printf("Square of %d is %d",x,x*x);
}