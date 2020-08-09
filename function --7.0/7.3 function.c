#include<stdio.h>

double add(double num1, double num2);     ///function decleartion;
int main()
{
    double a=2.8,b=2.7, c;       /// a function to add two number;;;

    c=add(a,b);       /// function call;
    printf("%lf\n",c);

    return 0;
}
double add(double num1, double num2)   ///function definition(;) is not used
{
    double sum=num1+num2;
    return sum;
}

