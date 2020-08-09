#include<stdio.h>

double pi = 3.1416;

void my_fnc()
{
    pi=3.1416;      /// here pi er value change kore dilam..

    return 0;          /// function er return type void hoile return na dileo chole..
}
int main()
{
    printf("%lf\n",pi);        ///here pi=3.14 hobe..

    my_fnc();                /// here pi= 3.1416 hobe bczz pi er value my_function e gia change hoia gace
    printf("%lf\n",pi);

    return 0;

}
