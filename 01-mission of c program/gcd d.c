#include<stdio.h>
int main(){
int  a,b,x;
scanf("%d%d",&a,&b);
if(a<b)
    x=b;
else
    x=a;
again: if(x%a==0 && x%b==0)
{
    printf("LCD = %d",x);
}
else
{
    goto again;
}
}

