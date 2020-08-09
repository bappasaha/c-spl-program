#include<stdio.h>
long int fibonocci(int count)
main()
{
    int cout, n;
    printf("How many fibanocci numbers?");
    scanf("%d",&n);
    print("\n");
    for(count=1;count<=n;++count)
        printf("\ni=%2d F=%ld",count,fibonocci(count));
}

