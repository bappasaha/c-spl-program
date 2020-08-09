#include<stdio.h>
#include<ctype.h>
int main()
{
    char lower,upper;
    printf("type a lowercase char:");
scanf("%C",&lower);

    if(lower>='a'&& lower<='z'){
        upper=('A'+lower-'a');
    }
        else
            upper=lower;
            printf("the uppercase character is %c",upper);
    }
