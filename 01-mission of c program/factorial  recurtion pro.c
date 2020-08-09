#include<stdio.h>
int main()
{
    int n,f(n);
    printf("Enter a number=");
    printf("the factorial number of %d is %d",n,f(n));
    scanf("%d",&n);
}
    int f(n)
    {
        if (n==0 || n ==1)
            return 1;
        else
            return(n*f(n-1));
    }
