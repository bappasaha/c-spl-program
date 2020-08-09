#include<stdio.h>
main()
{

    int i,N,fact=1;
    printf("Enter a number to calculate its factorial\n");
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d=%d\n",N,fact);
}
