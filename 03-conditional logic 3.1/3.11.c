#include<stdio.h>

int main()
{
    char ch ='r';

    if (ch=='a' ||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("%c is small letter vowel\n",ch);
    }
    else{
        printf("%c is a consonant\n",ch);
    }
    return 0;
}
