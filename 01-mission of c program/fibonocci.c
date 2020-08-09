#include<stdio.h>
int main()
{
    int f=1,s=1,next,n,i;
    printf("Enter ths value of limit=");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i<=1){
            next=i;
        }
        else{
        next=f+s;
        f=s;
        s=next;
    }
    }
    printf("%d",n);
    return 0;
}
