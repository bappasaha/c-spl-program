#include<stdio.h>
int main()
{
    int num1, num2, value;
    char sing;

    printf("please enter a number: ");  //plus minus multi
    scanf("%d", &num1);

    printf("please enter another number: ");
    scanf("%d", &num2);

    value =num1 +num2;
    sing ='+';

    printf("%d %c %d %d\n", num1, sing,num2, value);

    value =num1 -num2;
    sing ='-';
    printf("%d %c %d %d\n", num1, sing,num2, value);

    value =num1 * num2;
    sing ='*';
    printf("%d %c %d %d\n", num1, sing,num2, value);

    value =num1 /num2;
    sing ='/';
    printf("%d %c %d %d\n", num1, sing,num2, value);

    return 0;




}

