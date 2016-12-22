#include<stdio.h>
#include<conio.h>
void main()
{
int l,h,w,t,a;
printf("\n enter the value");
scanf("%d%d%d",&l,&h,&w);
a=l*w*h;
t=2*l*w+2*l*h+2*h*w;
printf("the area of cuboid is:%d,the total area is %d",a,t);
}
