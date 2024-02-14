#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    printf("\nEnter n:\n");
    scanf("%d",&n);
    int res;
    res=fact(n);
    printf("\nFactorial of %d! is %d\n",n,res);
    return 0;
}
