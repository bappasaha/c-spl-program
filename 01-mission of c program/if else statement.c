#include<stdio.h>

int main()
{
    int marks;

    printf("Enter the marks: ");
    scanf("%d",&marks);

    if(marks>=80)
    {
        printf("A+");
    }
    else if(marks>=70 & marks<80)
    {
        printf("A");
    }
    else if(marks>=60 & marks<70)
    {
        printf("A-");
    }
    else if(marks>=50 & marks<60)
    {
        printf("B");
    }
    else if(marks>=33 & marks<50)
    {
        printf("C");
    }
    else
    {
        printf("F");
    }
}
