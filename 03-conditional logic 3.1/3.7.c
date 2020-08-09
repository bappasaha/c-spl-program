#include<stdio.h>

int main()
{
    int number ,remainder;
    number=5;

    remainder = number % 2;

    if(remainder==0){
        printf(" the number is even");

    }
    else {
        printf("the number is odd");
    }
    return 0;

}

