#include<stdio.h>

int main()
{
    char chr;
    scanf("%c", &chr);

    if( chr=='a' ||chr=='e' || chr=='i'|| chr=='o'|| chr=='u')
    {
        printf("vowel");

    }
    else{
        printf("consonant");
        return 0;
    }
}
