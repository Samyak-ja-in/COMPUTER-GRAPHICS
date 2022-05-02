//BRESENHEM CIRCLE DRAWING ALGORITHM
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
void draw_circle();
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
//rectangle(0,0,620,420);
draw_circle(); //x=150 y=200 r=100
//draw_circle();
getch();
}
void draw_circle()
{
int x1,y1,r;
int a,b,p,x,y;
cout<<"ENTER x and y and radius";
cin>>x1>>y1>>r;
a=x1;
b=y1;
putpixel(x1,y1,GREEN);   //center
x=0;
y=r;
p=3-2*r;
while(x<=y)
{
putpixel(a+x,b+y,GREEN);
putpixel(a+y,b+x,GREEN);
putpixel(a+y,b-x,GREEN);
putpixel(a+x,b-y,GREEN);
putpixel(a-x,b-y,GREEN);
putpixel(a-y,b-x,GREEN);
putpixel(a-y,b+x,GREEN);
putpixel(a-x,b+y,GREEN);
if(p<0)
{p=p+4*x+6;
y=y;}
else
{p=p+4*(x-y)+10;
y=y-1;}
x++;
}
}







