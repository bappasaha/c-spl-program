#include<stdio.h>
#include<ctype.h>

int main()
{
    int i;
    char c;
    char str[]="I am Juel sikder.";

    for(i=0;str[i];i++)
    {
        putchar (toupper(str[i]));
    }
    return 0;
}
