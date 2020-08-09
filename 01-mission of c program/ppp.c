#include<stdio.h>
main()
{
    int n,i=0,j=1,f,l;
    /**This program has been created by Taohidur Rahaman*/
    printf("Enter the value of limit=");
    scanf("%d",&n);
    printf("The febonocci series is\n");
    printf("1 ");
    for(l=1;l<=n-1;l++)
    {
        f=i+j;
        i=j;
        j=f;
        printf("%d ",f);
    }
}
