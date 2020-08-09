#include<stdio.h>

int test_function(int x)
{
    int y =x;
    x = 2*y;

    return(x*y);
}
int main()
{
    int x=10, y=20, z;
    z= test_function(x);               ///main() function
    printf("%d %d %d\n", x, y, z);     ///   er x, y er man print hoiseee.

    return 0;
}
