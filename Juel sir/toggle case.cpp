#include<iostream>
#include<conio.h>
//#include<stdio.h>
void main()
{
 clrscr();
 char a[100];
cout<<"Enter a word"<<endl;
// gets(a);
 cin.getline(a,100);
 cout<<"The original string : "<<a<<endl;
cout<<"-----------------------------"<<endl;
for(int i=0;a[i]!='\0';i++)
{
if(a[i]>='a' && a[i]<='z')
a[i]=a[i]-32;
else if(a[i]>='A' && a[i]<='Z')
a[i]+=32;
}
cout<<"The toggle string is : "<<a<<endl;
getch();
}
