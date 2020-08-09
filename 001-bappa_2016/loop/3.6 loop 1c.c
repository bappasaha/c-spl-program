#include<stdio.h>

int main()
{
    int n, sum;

    for(n=5, sum=0; n<=1000; n=n+5){
        sum = sum +n;
    }

    printf(" sum is : %d\n",sum);

    return 0;
}
