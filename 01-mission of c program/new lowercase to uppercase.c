#include<stdio.h>
#include<ctype.h>
main()
{
    int lower, upper;
    lower = getchar();
    upper = toupper(lower);
    putchar(upper);
}
