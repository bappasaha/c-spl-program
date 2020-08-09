#include<stdio.h>
int main()
{
    char ch='W';
    if(ch>='a'&& ch<='z'){
        printf("%c is uppercase\n",ch);
    }
    if(ch>='A'&& ch<='Z'){
        printf("%c is lowercse\n",ch);
    }
}
