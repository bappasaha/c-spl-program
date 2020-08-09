#include<stdio.h>
int main()
{
    int number,variable,reminder,binary=0,i=1;
    printf("Enter the decimal number:");
    scanf("%d",&number);
    variable=number;
    while(number!=0){
        reminder=number%2;
        number=number/2;
        binary=binary+(reminder*i);
        i=i*10;
    }
    printf("%d=%d",variable,binary);
    return 0;
}
