#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
void draw_line(int,int,int,int);
int main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2;
int m,p,dy,dx,x,y;
initgraph(&gd,&gm,"C:\\TC\\BGI");
cout<<"Enter coordinates of line";
cin>>x1>>y1>>x2>>y2;
draw_line(x1,y1,x2,y2);
getch();
}
void draw_line(int x1,int y1,int x2,int y2)
{
int m,p,dy,dx,x,y;
dy=y2-y1;
dx=x2-x1;
m=dy/dx;
putpixel(x1,y1,GREEN);
if(m<1)
{
p=2*dy-dx;
x=x1;
y=y1;
while(x<x2)
{
if(p<0)
{x=x+1;
y=y;
p=p+2*dy;
putpixel(x,y,GREEN);
}
else//p>=0
{x=x+1;
y=y+1;
p=p+2*dy-2*dx;
putpixel(x,y,GREEN);}
}
}
if(m>=1)
{
p=2*dx-dy;
y=y1;
x=x1;
while(y<y2)
{
putpixel(x,y,GREEN);
if(p<0)
{p=p+2*dx;
y=y+1;
x=x;
}
else//(p>=0)
{y=y+1;
x=x+1;
p=p+2*dx-2*dy;
}
}
}
}
/*rectangle(20,40,220,240);
getch();
}  */