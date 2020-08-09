#include<stdio.h>

int main()
{
    int n;

    n= 10;

    if(n<0){
        printf("the number is negative ");
    }
    else if (n>0){
        printf("the number is positive");
    }
    else if(n==0){
        printf("the number is zero\n");
    }

    return 0;
}

