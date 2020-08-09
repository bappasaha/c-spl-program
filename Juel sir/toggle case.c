#include<stdio.h>
int main()

{
    char str[100];
    int i;
    printf("Please enter a string: ");
    fgets(str, 100, stdin);

    for(i=0;str[i]!=NULL;i++)
        {   if(str[i]>='A'&&str[i]<='Z')
                str[i]+=32;
            else if(str[i]>='a'&&str[i]<='z')
                str[i]-=32;
        }
    printf("String in toggle case is: %s",str);

    return 0;
 }
