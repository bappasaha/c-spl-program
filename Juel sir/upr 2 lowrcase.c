#include<stdio.h>
#include<ctype.h>

int main()
{
    int i=0;
    char c;
    char str[]="I AM JUEL SIKDER.";

    for(i=0;str[i];i++)
    {
        putchar(tolower(str[i]));
    }
}
