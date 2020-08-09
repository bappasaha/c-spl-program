#include<stdio.h>

main()

{
    int n,f(n);
    scanf("%d",&n);
    printf("%d %d",n,f(n));
}
int f(n)
{
    if(n==0 || n==1)
        return 1;
    else
        return (n*f(n-1));
}
