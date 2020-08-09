#include<stdio.h>

int main()
{
    char chr ;
    scanf("%c", &chr);

    if(chr >='0' && chr<='9')
    {
        printf("digit\n");

    }
    else
    {
        printf("not a digit\n");
    }

    return 0;
}
