#include<iostream.h>
#include<conio.h>
void main()
{
int i,a,b;
char s;
clrscr();
do
{
cout<<"Enter the no:"<<endl;
cin>>a>>b;
i=a+b;
cout<<i<<endl;
cout<<"if continue press"<<endl;
cin>>s;
}
while(s=='y');
getch();
}
