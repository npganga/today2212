#include<stdio.h>
#include<conio.h>
void main()
{
int a,p,r,n,t,b,c;
printf("\n enter the value");
scanf("\n %d%d%d%d",&p,&r,&n,&t);
b=(1+(r/n));
c=n*t;
a=p*(pow(b,c));
printf("\n compound intrest %d",a);
}
