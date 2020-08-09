#include<stdio.h>
main()
{
    int i=0,x=0;
    while(i<20){
        if(i%5 == 0){
            x+=i;
            printf("%d\n",x);
        }
        ++i;
    }
    printf("\n x=%d",x);
}
